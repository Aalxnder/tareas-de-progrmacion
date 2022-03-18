#librerias importadas
import pygame
import random
WIDTH = 1200 #ancho de ventana
HEIGHT = 700 #largo de ventana
#colores
BLACK = (0, 0, 0)
WHITE = (225, 225, 225)
RED = (0, 255, 0)
#inicializar pygame
pygame.init()
pygame.mixer.init()
#inicializar ventana
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("juego de navesitas con musica del bicho de fondo")
#controlador de frames por segundo
clock = pygame.time.Clock()
#funcion marcador
def draw_text(surface, text, size, x, y):
    font = pygame.font.SysFont("calibri", size )
    text_surface = font.render(text, True, WHITE)
    text_rect = text_surface.get_rect()
    text_rect.midtop = (x, y)
    surface.blit(text_surface,text_rect)
def draw_shield_bar(surface, x, y, percentage):
    BAR_LENGHT = 400
    BAR_HEIGHT = 40
    fill = (percentage / 100)*BAR_LENGHT
    border = pygame.Rect(x, y, BAR_LENGHT, BAR_HEIGHT)
    fill = pygame.Rect(x, y, fill, BAR_HEIGHT)
    pygame.draw.rect(surface, RED, fill)
    pygame.draw.rect(surface, WHITE, border, 2)
#clase jugador
class Player(pygame.sprite.Sprite):
    #cargar sprite del jugador
    def __init__(self):
        super().__init__()
        self.image = pygame.image.load("player2.png").convert()
        #eliminar borde negro del sprite
        self.image.set_colorkey(BLACK)
        self.rect = self.image.get_rect()
        self.rect.centerx = WIDTH // 2
        self.rect.bottom = HEIGHT - 10
        self.speed_x = 0 #velocidad de movimiento
        self.shield = 100 #barra de vida
#mover jugador
    def update(self):
        self.speed_x = 0
        keystate = pygame.key.get_pressed()
        if keystate[pygame.K_LEFT]:
            self.speed_x = -10
        if keystate[pygame.K_RIGHT]:
            self.speed_x = 10
        self.rect.x += self.speed_x
        if self.rect.right > WIDTH:
            self.rect.right = WIDTH
        if self.rect.left < 0:
            self.rect.left = 0
            #funcion disparar
    def shoot(self):
        bullet = Bullet(self.rect.centerx, self.rect.top)
        all_sprites.add(bullet)
        bullets.add(bullet)
        laser_sound.play()

        #clase meteoros
class Meteor(pygame.sprite.Sprite):
    #cargar sprite de meteoro
    def __init__(self):
        super().__init__()
        self.image = random.choice(meteor_images)
        #eliminar fondo
        self.image.set_colorkey(BLACK)
        self.rect = self.image.get_rect()
        self.rect.x = random.randrange(WIDTH - self.rect.width)
        self.rect.y = random.randrange(-240,-200)
        self.speedy = random.randrange(1, 10)
        self.speedx = random.randrange(-10, 10)
        #movimiento de meteoro
    def update(self):
        self.rect.y += self.speedy
        self.rect.x += self.speedx
        if self.rect.top > HEIGHT + 10 or self.rect.left < -100 or self.rect.right > WIDTH + 100:
            self.rect.x = random.randrange(WIDTH - self.rect.width)
            self.rect.y = random.randrange(-100,-40)
            self.speedy = random.randrange(1, 10)
            #clase balas
class Bullet(pygame.sprite.Sprite):
    #cargar bala
    def __init__(self, x, y):
        super().__init__()
        self.image = pygame.image.load("laser1.png")
        self.image.set_colorkey(BLACK)
        self.rect = self.image.get_rect()
        self.rect.y = y
        self.rect.centerx = x
        self.speedy = -10

    def update(self):
        self.rect.y += self.speedy
        if self.rect.bottom < 0:
            self.kill()
#clase explosiones
class Explosion (pygame.sprite.Sprite):
    def __init__(self, center):
        super().__init__()
        self.image = explosion_anim[0]
        self.rect = self.image.get_rect()
        self.rect.center = center
        self.frame = 0
        self.last_update = pygame.time.get_ticks()
        self.frame_rate = 60 #velocidad de la explosion
    def update(self):
        now = pygame.time.get_ticks()
        if now - self.last_update > self.frame_rate:
            self.last_update = now
            self.frame += 1
            if self.frame == len(explosion_anim):
                self.kill()
            else:
                center = self.rect.center
                self.image = explosion_anim[self.frame]
                self.rect = self.image.get_rect()
                self.rect.center = center
def show_go_screen():
    screen.blit(background2,[0, 0])
    draw_text(screen,"JUEGO DE NAVESITAS CON MUSICA DEL BICHO DE FONDO", 35, WIDTH // 2, HEIGHT // 4)
    draw_text(screen,"instrucciones", 27, WIDTH //2, HEIGHT //2)
    draw_text(screen,"presiona una tecla para comenzar", 40, WIDTH //2, HEIGHT * 3/4)
    pygame.display.flip()
    waiting = True
    while waiting:
        clock.tick(60)
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
            if event.type == pygame.KEYUP:
                waiting = False
#importar imagenes de meteoros
meteor_images = []
meteor_list = ["meteorGrey_big1.png","meteorGrey_big2.png","meteorGrey_big3.png","meteorGrey_big4.png",
                "meteorGrey_med1.png","meteorGrey_med2.png","meteorGrey_small1.png","meteorGrey_small2.png",
                "meteorGrey_tiny1.png","meteorGrey_tiny2.png"]
for img in meteor_list:
    meteor_images.append(pygame.image.load(img).convert())
#cargar explosiones
explosion_anim = []
for i in range(9):
    file = "regularExplosion0{}.png".format(i)
    img = pygame.image.load(file).convert()
    img.set_colorkey(BLACK)
    img_scale = pygame.transform.scale(img,(70,70))
    explosion_anim.append(img_scale)

#imagen de fondo
background = pygame.image.load("backgroundcr7siuuu.jpeg").convert()
background2 = pygame.image.load("background2.jpg").convert()
#cargar sonidos
laser_sound = pygame.mixer.Sound("laser5.ogg")
explosion_sound =pygame.mixer.Sound("explosion.wav")
pygame.mixer.music.load("amor mio.ogg")
pygame.mixer.music.set_volume(0.2)

#correr musica
pygame.mixer.music.play(loops = -1)
#game over
game_over = True
running = True
while running:
    if game_over:
        #pantalla de game over
        show_go_screen()
        #lista de sprites
        game_over = False
        all_sprites = pygame.sprite.Group()
        meteor_list = pygame.sprite.Group()
        bullets = pygame.sprite.Group()

        player = Player()
        all_sprites.add(player)
        for i in range(8):
            meteor = Meteor()
            all_sprites.add(meteor)
            meteor_list.add(meteor)

        score = 0

    clock.tick(60)
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                player.shoot()
    all_sprites.update()
    #colisiones laser meteoro
    hits = pygame.sprite.groupcollide(meteor_list, bullets, True, True)
    for hit in hits:
        score += 1
        explosion = Explosion(hit.rect.center)
        all_sprites.add(explosion)
        explosion_sound.play()
        meteor = Meteor()
        all_sprites.add(meteor)
        meteor_list.add(meteor)
    #colisiones jugador meteoro
    hits = pygame.sprite.spritecollide(player, meteor_list, True)
    for hit in hits:
        player.shield -= 20
        meteor = Meteor()
        all_sprites.add(meteor)
        meteor_list.add(meteor)
        if player.shield <= 0:
            game_over = True
#dibujar fondo
    screen.blit(background,[0, 0])
#dibujar pantalla
    all_sprites.draw(screen)
#dibujar marcador
    draw_text(screen, str(score), 50, WIDTH // 2, 20 )
    #barra de salud
    draw_shield_bar(screen, 5, 5, player.shield)

    pygame.display.flip()
pygame.quit()
