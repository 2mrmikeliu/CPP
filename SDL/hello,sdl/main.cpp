#include "SDL.h"
int main( int argc, char* args[] ) 
{ 
    //����SDL
    SDL_Init( SDL_INIT_EVERYTHING );
    //��������
    SDL_Surface* hello = NULL;
    SDL_Surface* screen = NULL;
    screen = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );
    //����ͼ��
    hello = SDL_LoadJPG( "����.jpg" );
    //�˳�SDL 
    SDL_Quit();
     //��ͼ��Ӧ�õ�������
    SDL_BlitSurface( hello, NULL, screen, NULL );
 
    //���´���
    SDL_Flip( screen );
 
    //��ͣ
    SDL_Delay( 2000 );
    
	//�ͷ��Ѽ��ص�ͼ��
    SDL_FreeSurface( hello );
 
    //�˳�SDL
    SDL_Quit();

    return 0;
} 
