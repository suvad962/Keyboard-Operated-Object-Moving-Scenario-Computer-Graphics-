#include<GL/gl.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>
using namespace std;

//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

int q;
float _angle = 0.0;
float _angle1 = 0.0;
float _angle2 = 0.0;
float _cameraAngle = 0.0;
float _mov = 0.0;
float _mov1 = 0.0;
float _mov2 = 0.0;
float _mov3 = 0.0;
float _mov4 = 0.0;
float _mov5 = 0.0;
float _mov6 = 0.0;
float _mov7 = 0.0;
float _mov8 = 0.0;
float _mov9 = 0.0;
float _mov10 = 0.0;
float _mov11 = 0.0;
float _dark = 0.0;
float _light1 = 0.0;
float _hlight = 0.0;
int  a = 0;
int pos = 0;
int pos1 = 0;
int c1 = 0;
int c2 = 0;
int c3 = 0;
int c4 = 0;
int b1 = 0;
int b2 = 0;
int s1 = 0;
int s2 = 0;
int m1 = 0;
int p1 = 0;



void car1()
{
/// start of car1
    glPushMatrix();
    glScalef(1,.4,0.8);
///wheel
glPushMatrix();
    glTranslatef(0,0,.2);
    glColor3ub(0,0,0);

/// front left wheel
    glPushMatrix();
    glTranslatef(-0.3,-0.15,0.0);
    glRotatef(_angle, 0.0, 0.0, -1.0);
    glutSolidTorus(.04,.08,25,25);
    glPopMatrix();
/// back left wheel
    glPushMatrix();
    glTranslatef(0.3,-0.15,0.0);
    glRotatef(_angle, 0.0, 0.0, -1.0);
    glutSolidTorus(.04,.08,25,25);
    glPopMatrix();

glPopMatrix();

/// body start
glPushMatrix();
///upper part
    glPushMatrix();
    glColor3ub(0, 128, 128);
    glTranslatef(0,0.25,0);
    glScalef(1.5,.5,1);
    glutSolidCube(0.4);
    glPopMatrix();
///glass
    glPushMatrix();
    glColor3f(.8,.8,.8);
    glTranslatef(-0.3,0.25,0);
    glScalef(0.01,.5,1);
    glutSolidCube(0.4);
    glPopMatrix();

///lower part
    glPushMatrix();
    glColor3f(0.0,0.6,0.2);
    glScalef(2.4,.75,1);
    glutSolidCube(0.4);
    glPopMatrix();
///roof
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef(0,0.35,0);
    glScalef(1.5,.01,1);
    glutSolidCube(0.4);
    glPopMatrix();
/// front hood
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(-0.39,0.15,0);
    glScalef(0.44,.01,1);
    glutSolidCube(0.4);
    glPopMatrix();
/// back hood
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(0.39,0.15,0);
    glScalef(0.44,.01,1);
    glutSolidCube(0.4);
    glPopMatrix();

///head light
glPushMatrix();
glTranslatef(-0.08,0,0);
glColor3f(1.0,1.0,1.0);
///head light left
glPushMatrix();
glTranslatef(0,0,0.12);
glPushMatrix();
glTranslatef(-0.4, 0.05, 0.0);
glRotatef(-90, 0.0, 1.0, 0.0);
glutSolidCone(.05,0.01,25,25);
glPopMatrix();
glPopMatrix();

///head light right
glPushMatrix();
glTranslatef(0,0,-0.12);
glPushMatrix();
glTranslatef(-0.4, 0.05, 0.0);
glRotatef(-90, 0.0, 1.0, 0.0);
glutSolidCone(.05,0.01,25,25);
glPopMatrix();
glPopMatrix();
glPopMatrix();

glPopMatrix();
///body end


glPushMatrix();
    glTranslatef(0,0,-.2);
     glColor3ub(0,0,0);
/// front left wheel
    glPushMatrix();
    glTranslatef(-.3,-.15,0);
    glRotatef(_angle, 0.0, 0.0, -1.0);
    glutSolidTorus(.04,.08,25,25);
    glPopMatrix();
 /// back left wheel
    glPushMatrix();
    glTranslatef(0.3,-0.15,0.0);
    glRotatef(_angle, 0.0, 0.0, -1.0);
    glutSolidTorus(.04,.08,25,25);
    glPopMatrix();
    glPopMatrix();


    ///left light
        glPushMatrix();
        glTranslatef(0.0,0.05,0.11);
        glPushMatrix();
        glTranslatef(-0.90,0.0,0.0);
        glRotatef(90,0.0,1.0,0.0);
        glColor4f(1.0,1.0,0.0,_dark);
        glutSolidCone(0.15,0.5,30,30);
        glPopMatrix();
        glPopMatrix();

        ///right light
        glPushMatrix();
        glTranslatef(0.0,0.05,-0.11);
        glPushMatrix();
        glTranslatef(-0.90,0.0,0.0);
        glRotatef(90,0.0,1.0,0.0);
        glColor4f(1.0,1.0,0.0,_dark);
        glutSolidCone(0.15,0.5,30,30);
        glPopMatrix();
        glPopMatrix();


    glPopMatrix();
///end of car1
}

void car2()
{
    /// start of car1
    glPushMatrix();
    glScalef(1,.4,0.8);
///wheel
glPushMatrix();
    glTranslatef(0,0,.2);
    glColor3ub(0,0,0);

/// front left wheel
    glPushMatrix();
    glTranslatef(-0.3,-0.15,0.0);
    glRotatef(_angle, 0.0, 0.0, -1.0);
    glutSolidTorus(.04,.08,25,25);
    glPopMatrix();
/// back left wheel
    glPushMatrix();
    glTranslatef(0.3,-0.15,0.0);
    glRotatef(_angle, 0.0, 0.0, -1.0);
    glutSolidTorus(.04,.08,25,25);
    glPopMatrix();

glPopMatrix();

/// body start
glPushMatrix();
///upper part
    glPushMatrix();
    glColor3f(0.4,0.6,0);
    glTranslatef(0,0.25,0);
    glScalef(1.5,.5,1);
    glutSolidCube(0.4);
    glPopMatrix();
///glass
    glPushMatrix();
    glColor3f(.8,.8,.8);
    glTranslatef(-0.3,0.25,0);
    glScalef(0.01,.5,1);
    glutSolidCube(0.4);
    glPopMatrix();

///lower part
    glPushMatrix();
    glColor3f(0.0,0.6,0.2);
    glScalef(2.4,.75,1);
    glutSolidCube(0.4);
    glPopMatrix();
///roof
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef(0,0.35,0);
    glScalef(1.5,.01,1);
    glutSolidCube(0.4);
    glPopMatrix();
/// front hood
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(-0.39,0.15,0);
    glScalef(0.44,.01,1);
    glutSolidCube(0.4);
    glPopMatrix();
/// back hood
    glPushMatrix();
    glColor3f(0,0,1);
    glTranslatef(0.39,0.15,0);
    glScalef(0.44,.01,1);
    glutSolidCube(0.4);
    glPopMatrix();

///head light
glPushMatrix();
glTranslatef(-0.08,0,0);
glColor3f(1.0,1.0,1.0);
///head light left
glPushMatrix();
glTranslatef(0,0,0.12);
glPushMatrix();
glTranslatef(-0.4, 0.05, 0.0);
glRotatef(-90, 0.0, 1.0, 0.0);
glutSolidCone(.05,0.01,25,25);
glPopMatrix();
glPopMatrix();

///head light right
glPushMatrix();
glTranslatef(0,0,-0.12);
glPushMatrix();
glTranslatef(-0.4, 0.05, 0.0);
glRotatef(-90, 0.0, 1.0, 0.0);
glutSolidCone(.05,0.01,25,25);
glPopMatrix();
glPopMatrix();
glPopMatrix();


glPopMatrix();
///body end


glPushMatrix();
    glTranslatef(0,0,-.2);
     glColor3ub(0,0,0);
/// front left wheel
    glPushMatrix();
    glTranslatef(-.3,-.15,0);
    glRotatef(_angle, 0.0, 0.0, -1.0);
    glutSolidTorus(.04,.08,25,25);
    glPopMatrix();
 /// back left wheel
    glPushMatrix();
    glTranslatef(0.3,-0.15,0.0);
    glRotatef(_angle, 0.0, 0.0, -1.0);
    glutSolidTorus(.04,.08,25,25);
    glPopMatrix();
    glPopMatrix();

    ///left light
        glPushMatrix();
        glTranslatef(0.0,0.05,0.11);
        glPushMatrix();
        glTranslatef(-0.90,0.0,0.0);
        glRotatef(90,0.0,1.0,0.0);
        glColor4f(1.0,1.0,0.0,_dark);
        glutSolidCone(0.15,0.5,30,30);
        glPopMatrix();
        glPopMatrix();

        ///right light
        glPushMatrix();
        glTranslatef(0.0,0.05,-0.11);
        glPushMatrix();
        glTranslatef(-0.90,0.0,0.0);
        glRotatef(90,0.0,1.0,0.0);
        glColor4f(1.0,1.0,0.0,_dark);
        glutSolidCone(0.15,0.5,30,30);
        glPopMatrix();
        glPopMatrix();


    glPopMatrix();
///end of car1
}

void bus()
{

/// start of bus

    glPushMatrix();

///back glass
    glPushMatrix();
    glColor3f(.8,.8,.8);
    glTranslatef(0.625,0.15,0);
    glScalef(0.01,.4,1);
    glutSolidCube(0.5);
    glPopMatrix();



///wheel
    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(0,0,-.25);
/// front right wheel
    glPushMatrix();
    glTranslatef(-.37,-.25,0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutSolidTorus(.045,.09,25,25);
    glPopMatrix();
 /// back right wheel
    glPushMatrix();
    glTranslatef(0.3,-0.25,0.0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutSolidTorus(.045,.09,25,25);
    glPopMatrix();
    glPopMatrix();

/// body start
glPushMatrix();

///lower part
    glPushMatrix();
    glColor3ub(0, 206, 209);
    glScalef(2.5,1,1);
    glutSolidCube(0.5);
    glPopMatrix();
///glass
    glPushMatrix();
    glColor3f(.8,.8,.8);
    glTranslatef(-0.625,0.15,0);
    glScalef(0.01,.4,1);
    glutSolidCube(0.5);
    glPopMatrix();
///roof
    glPushMatrix();
    glColor3f(1,0,0);
    glTranslatef(0,0.25,0);
    glScalef(2.5,.01,1);
    glutSolidCube(0.5);
    glPopMatrix();

///head light left
glPushMatrix();
glTranslatef(-0.23, -0.15, 0.0);
glPushMatrix();
glTranslatef(0,0,0.12);
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(-0.4, 0.05, 0.0);
glRotatef(-90, 0.0, 1.0, 0.0);
glutSolidCone(.06,0.01,25,25);
glPopMatrix();
glPopMatrix();

///head light right
glPushMatrix();
glTranslatef(0,0,-0.12);
glPushMatrix();
glColor3f(1.0,1.0,1.0);
glTranslatef(-0.4, 0.05, 0.0);
glRotatef(-90, 0.0, 1.0, 0.0);
glutSolidCone(.06,0.01,25,25);
glPopMatrix();
glPopMatrix();
glPopMatrix();


glPopMatrix();
///body end

///wheel
    glPushMatrix();
    glColor3ub(0,0,0);
    glTranslatef(0,0,.25);
/// front left wheel
    glPushMatrix();
    glTranslatef(-0.37,-0.25,0.0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutSolidTorus(.045,.09,25,25);
    glPopMatrix();
/// back left wheel
    glPushMatrix();
    glTranslatef(0.3,-0.25,0.0);
    glRotatef(_angle1, 0.0, 0.0, -1.0);
    glutSolidTorus(.045,.09,25,25);
    glPopMatrix();
    glPopMatrix();

    ///left light
    glPushMatrix();
    glRotatef(15,0.0,0.0,1.0);
        glPushMatrix();
        glTranslatef(0.0,0.05,0.11);
        glPushMatrix();
        glTranslatef(-0.90,0.0,0.0);
        glRotatef(90,0.0,1.0,0.0);
        glColor4f(1.0,1.0,0.0,_dark);
        glutSolidCone(0.15,1.0,30,30);
        glPopMatrix();
        glPopMatrix();

        ///right light
        glPushMatrix();
        glTranslatef(0.0,0.05,-0.11);
        glPushMatrix();
        glTranslatef(-0.90,0.0,0.0);
        glRotatef(90,0.0,1.0,0.0);
        glColor4f(1.0,1.0,0.0,_dark);
        glutSolidCone(0.15,1.0,30,30);
        glPopMatrix();
        glPopMatrix();
    glPopMatrix();


glPopMatrix();
///end of bus

}

void tree()
{
    glPushMatrix();
    glTranslatef(7,-2,-30);


    ///tree start
    glPushMatrix();
    glRotatef(-90,1.0,0.0,0.0);
        glColor3ub(139, 69, 19);
        glutSolidCone(0.35,0.2,10,10);
        glutSolidCone(0.30,0.5,10,10);
        glutSolidCone(0.25,0.8,10,10);
        glutSolidCone(0.20,1.1,10,10);
        glutSolidCone(0.15,1.4,10,10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.3,1.1,0.0);
        glColor3ub(0, 255, 0);
        glutSolidSphere(0.4,20,20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-0.3,1.1,0.0);
        glColor3ub(0, 255, 0);
        glutSolidSphere(0.4,20,20);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0,1.5,0.0);
        glColor3ub(0, 255, 0);
        glutSolidSphere(0.4,20,20);
    glPopMatrix();
    ///tree end
glPopMatrix();

}

void tree_row()
{
  ///right side
  //1
  tree();
  //2
  glPushMatrix();
  glTranslatef(1,0,0);
  tree();
  glPopMatrix();
    //3
  glPushMatrix();
  glTranslatef(2,0,0);
  tree();
  glPopMatrix();

  ///left side
  //1
  glPushMatrix();
  glTranslatef(-18,0,0);
  tree();
  glPopMatrix();
    //2
  glPushMatrix();
  glTranslatef(-19,0,0);
  tree();
  glPopMatrix();
    //3
  glPushMatrix();
  glTranslatef(-20,0,0);
  tree();
  glPopMatrix();
    //4
  glPushMatrix();
  glTranslatef(-21,0.5,0);
  glScalef(1,1.2,1);
  tree();
  glPopMatrix();
    //5
  glPushMatrix();
  glTranslatef(-22,0.3,0);
  glScalef(1,1.2,1);
  tree();
  glPopMatrix();
    //6
  glPushMatrix();
  glTranslatef(-24.9,0.3,0);
  glScalef(1.2,1.2,1);
  tree();
  glPopMatrix();
      //7
  glPushMatrix();
  glTranslatef(-27.9,0.6,0);
  glScalef(1.5,1.3,1);
  tree();
  glPopMatrix();
    //8
  glPushMatrix();
  glTranslatef(-29.5,0.6,0);
  glScalef(1.5,1.8,1);
  tree();
  glPopMatrix();
    //9
  glPushMatrix();
  glTranslatef(-31,0.6,0);
  glScalef(1.5,1.5,1);
  tree();
  glPopMatrix();
      //10
  glPushMatrix();
  glTranslatef(-33,0.5,0);
  glScalef(1.5,1.5,1);
  tree();
  glPopMatrix();
      //11
  glPushMatrix();
  glTranslatef(-35,0.6,0);
  glScalef(1.5,1.7,1);
  tree();
  glPopMatrix();
      //12
  glPushMatrix();
  glTranslatef(-37,0.5,0);
  glScalef(1.5,1.5,1);
  tree();
  glPopMatrix();
    //13
  glPushMatrix();
  glTranslatef(-39,0.5,0);
  glScalef(1.5,1.5,1);
  tree();
  glPopMatrix();


}

void plane()
{
glPushMatrix();
  glTranslatef(36.0,7, -33.0);
  glScalef(2,1.0,1.0);
  glRotatef(45,0.0,1.0,0);
glPushMatrix();
  glTranslatef(_mov9,0.0,0.0);

///Start of plane
glPushMatrix();
///tail
///tail right wing
glPushMatrix();
glColor3ub(0, 100, 0);
glTranslatef(0.7,0.05,-0.16);
glScalef(0.6,0.04,0.8);
glutSolidCube(0.4);
glPopMatrix();

///tail middle
glPushMatrix();
glColor3ub(255, 0, 0);
//1st plate
glPushMatrix();
glRotatef(70,0,0,1);
glPushMatrix();
glScalef(1.3,0.5,0.03);
glTranslatef(0.5,-1,0);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();
//2nd plate
glPushMatrix();
glPushMatrix();
glScalef(0.46,1.8,0.03);
glTranslatef(1.7,0.2,0);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();
//3rd plate
glPushMatrix();
glRotatef(40,0,0,1);
glPushMatrix();
glScalef(0.6,0.4,0.03);
glTranslatef(0.805,-1.15,0);
glutSolidSphere(.40,30,30);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///tail left wing
glPushMatrix();
glColor3ub(0, 100, 0);
glTranslatef(0.7,0.05,0.16);
glScalef(0.6,0.04,0.8);
glutSolidCube(0.4);
glPopMatrix();

///upper glass
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(0.8,0.6,0.3);
glTranslatef(-0.18,0.6,0);
glutSolidSphere(.40,30,30);
glPopMatrix();

/// right wing
glPushMatrix();
glColor3ub(0, 100, 0);
glTranslatef(-0.27,-0.25,-0.69);
glScalef(1,0.1,2.7);
glutSolidCube(0.4);
glPopMatrix();


///body
glPushMatrix();
glColor3ub(47, 79, 79);
///skeleton
glPushMatrix();
glScalef(1.9,1,0.5);
glutSolidSphere(.40,70,70);
glPopMatrix();

///body front
//torus 1
glPushMatrix();
glScalef(1,0.32,0.16);
glTranslatef(-0.2,0,0);
glRotatef(90,0,1,0);
glutSolidTorus(.3,1,45,40);
glPopMatrix();
//torus 2
glPushMatrix();
glScalef(1.4,0.32,0.16);
glTranslatef(-0.2,0,0);
glRotatef(90,0,1,0);
glutSolidTorus(.3,1,45,40);
glPopMatrix();
//torus 3
glPushMatrix();
glScalef(0.2,0.23,0.115);
glTranslatef(-3,0,0);
glRotatef(90,0,1,0);
glutSolidTorus(0.8,0.9,45,40);
glPopMatrix();


glPopMatrix();


///back wheel
///bar
glPushMatrix();
glRotatef(10,0,0,1);
glPushMatrix();
glColor3ub(	47, 79, 79);
glScalef(0.08,0.6,0.08);
glTranslatef(5,-0.85,0);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();

///wheel
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.08,0.1,0.2);
glTranslatef(6.35,-5.4,0);
glutSolidTorus(0.3,0.7,30,40);
glPopMatrix();

///front wheel
///right bar
glPushMatrix();
glRotatef(10,1,0,0);
glPushMatrix();
glColor3ub(	47, 79, 79);
glScalef(0.1,1.5,0.1);
glTranslatef(-4.4,-0.385,-0.8);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();

///right wheel
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.11,0.13,0.2);
glTranslatef(-4,-6.5,-1.5);
glutSolidTorus(0.3,0.7,30,40);
glPopMatrix();

///left bar
glPushMatrix();
glRotatef(-10,1,0,0);
glPushMatrix();
glColor3ub(	47, 79, 79);
glScalef(0.1,1.5,0.1);
glTranslatef(-4.4,-0.385,0.8);
glutSolidCube(0.4);
glPopMatrix();
glPopMatrix();

///left wheel
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.11,0.13,0.2);
glTranslatef(-4,-6.5,1.5);
glutSolidTorus(0.3,0.7,30,40);
glPopMatrix();

/// left wing
glPushMatrix();
glColor3ub(0, 100, 0);
glTranslatef(-0.27,-0.25,0.69);
glScalef(1,0.1,2.7);
glutSolidCube(0.4);
glPopMatrix();


///propeller start
glPushMatrix();
glTranslatef(-0.83,0.02,0);
glScalef(0.8,0.9,0.8);
glRotatef(_angle2, 1.0, 0.0, 0.0);
glPushMatrix();

///bar
glPushMatrix();
glColor3ub(47, 79, 79);
glScalef(0.3,0.08,0.08);
glRotatef(90, 0.0, 1.0, 0.0);
glutSolidTorus(.30,.70,30,70);
glPopMatrix();

///blade

glPushMatrix();
glColor3ub(47, 79, 79);
glTranslatef(-0.04,0,0);
///blade1
glPushMatrix();
glScalef(0.02,0.2,1.6);
glTranslatef(-1.6,0,0.29);
glutSolidCube(.5);
glPopMatrix();

///blade2
glPushMatrix();
glRotatef(50,1,0,0);
glPushMatrix();
glScalef(0.02,0.2,1.6);
glTranslatef(-1.6,0,-0.29);
glutSolidCube(.5);
glPopMatrix();
glPopMatrix();

///blade3
glPushMatrix();
glRotatef(-65,1,0,0);
glPushMatrix();
glScalef(0.02,0.2,1.6);
glTranslatef(-1.6,0,-0.29);
glutSolidCube(.5);
glPopMatrix();
glPopMatrix();

glPopMatrix();

///cap
glPushMatrix();
glColor3ub(255, 0, 0);
glScalef(0.1,0.2,0.2);
glTranslatef(-0.6,0, 0.0);
glRotatef(-90,0,1,0);
glutSolidCone(.5,1.0,20,20);
glPopMatrix();

glPopMatrix();
glPopMatrix();
///propeller end

glPopMatrix();
glPopMatrix();
glPopMatrix();

}


void restaurant()
{


/// start of restaurant
glPushMatrix();

///ground floor
glPushMatrix();
glTranslatef(0,0,0.15);
 //body
glPushMatrix();
glColor3ub(0, 255, 127);
glScalef(3,0.5,1.5);
glutSolidCube(0.6);
glPopMatrix();
//floor
glPushMatrix();
glColor3ub(220, 20, 60);
glScalef(3.02,0.03,2.01);
glTranslatef(0,-5.3,0.076);
glutSolidCube(0.6);
glPopMatrix();

//body design
glPushMatrix();
glTranslatef(0,-0.31,0.15);
//pillar roof
glPushMatrix();
glColor3ub(0,0,0);
glScalef(9,0.2,0.1);
glTranslatef(0,2.2,3);
glutSolidCube(0.2);
glPopMatrix();
//back wall(left)
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(-0.486,0.21,0.296);
glScalef(4.06,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//back wall(right)
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(0.486,0.21,0.296);
glScalef(4.06,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//glass
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(8.9,0.8,0.01);
glTranslatef(0,0.425,30);
glutSolidCube(0.2);
glPopMatrix();
//door left pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.05,1.5,0.1);
glTranslatef(-1.7,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//door right pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.05,1.5,0.1);
glTranslatef(1.7,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
// gate
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(0.8,1.3,0.01);
glTranslatef(0,0.224,30);
glutSolidCube(0.2);
glPopMatrix();
//door handle (right)
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.03,0.3,0.05);
glTranslatef(0.4,1.0,6.1);
glutSolidCube(0.2);
glPopMatrix();
//door handle (left)
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.03,0.3,0.05);
glTranslatef(-0.4,1.0,6.1);
glutSolidCube(0.2);
glPopMatrix();
//left pillar 1
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(-2.5,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//left pillar 2
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(-5.9,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,1.43);
glTranslatef(-17.89,0.42,0.31);
glutSolidCube(0.2);
glPopMatrix();
//right pillar 1
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(2.5,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//right pillar 2
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(5.9,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();

///ground umbrella table 1 start
glPushMatrix();
glTranslatef(-0.7,0.32,0.43);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///ground umbrella table 1 end

///ground umbrella table 2 start
glPushMatrix();
glTranslatef(-0.4,0.32,0.43);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///ground umbrella table 2 end

///ground umbrella table 3 start
glPushMatrix();
glTranslatef(0.4,0.32,0.43);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///ground umbrella table 3 end

///ground umbrella table 4 start
glPushMatrix();
glTranslatef(0.7,0.32,0.43);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///ground umbrella table 4 end

//right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,1.43);
glTranslatef(17.89,0.42,0.31);
glutSolidCube(0.2);
glPopMatrix();
//front wall(left)
glPushMatrix();
glColor3ub(20,20,240);
glTranslatef(-0.53,0.21,0.59);
glScalef(3.7,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//front wall(right)
glPushMatrix();
glColor3ub(20,20,240);
glTranslatef(0.53,0.21,0.59);
glScalef(3.7,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();

glPopMatrix();

//left pillar
glPushMatrix();
glColor3ub(139, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(-1.15,-0.037,3.5);
glutSolidCube(0.2);
glPopMatrix();
//left light
glPushMatrix();
glColor3ub(0,255,255);
glTranslatef(-0.173,0.095,0.735);
glutSolidSphere(0.03,30,30);
glPopMatrix();
//right pillar
glPushMatrix();
glColor3ub(139, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(1.15,-0.037,3.5);
glutSolidCube(0.2);
glPopMatrix();
//right light
glPushMatrix();
glColor3ub(0,255,255);
glTranslatef(0.173,0.095,0.735);
glutSolidSphere(0.03,30,30);
glPopMatrix();



glPopMatrix();

///1st floor
glPushMatrix();
//body
glPushMatrix();
glColor3ub(0, 255, 127);
glTranslatef(0,0.31,0);
glScalef(3,0.5,1);
glutSolidCube(0.6);
glPopMatrix();
//floor
glPushMatrix();
glColor3ub(255,0,0);
glTranslatef(0,0.155,0.15);
glScalef(3.0,0.02,1.5);
glutSolidCube(0.6);
glPopMatrix();
//pillar roof
glPushMatrix();
glColor3ub(0,0,0);
glScalef(9,0.2,0.1);
glTranslatef(0,2.2,3);
glutSolidCube(0.2);
glPopMatrix();
//roof back wall(left)
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(-0.486,0.21,0.296);
glScalef(4.06,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//roof back wall(right)
glPushMatrix();
glColor3ub(0,0,0);
glTranslatef(0.486,0.21,0.296);
glScalef(4.06,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();
//glass
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(8.9,0.8,0.01);
glTranslatef(0,0.425,30);
glutSolidCube(0.2);
glPopMatrix();
//door left pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.05,1.5,0.1);
glTranslatef(-1.7,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//door right pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.05,1.5,0.1);
glTranslatef(1.7,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
// gate
glPushMatrix();
glColor3ub(230, 230, 250);
glScalef(0.8,1.3,0.01);
glTranslatef(0,0.224,30);
glutSolidCube(0.2);
glPopMatrix();
//door handle (right)
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.03,0.3,0.05);
glTranslatef(0.4,1.0,6.1);
glutSolidCube(0.2);
glPopMatrix();
//door handle (left)
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.03,0.3,0.05);
glTranslatef(-0.4,1.0,6.1);
glutSolidCube(0.2);
glPopMatrix();
//left pillar
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(-2.5,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//left pillar 2
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(-5.9,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//roof left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,1.43);
glTranslatef(-17.89,0.42,0.31);
glutSolidCube(0.2);
glPopMatrix();
//right pillar 1
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(2.5,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();
//right pillar 2
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.15,1.5,0.1);
glTranslatef(5.9,0.206,3.0);
glutSolidCube(0.2);
glPopMatrix();


///umbrella table 1 start
glPushMatrix();
glTranslatef(-0.7,0.32,0.45);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///umbrella table 1 end

///umbrella table 2 start
glPushMatrix();
glTranslatef(-0.35,0.32,0.45);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///umbrella table 2 end

///umbrella table 3 start
glPushMatrix();
glTranslatef(0.35,0.32,0.45);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///umbrella table 3 end

///umbrella table 4 start
glPushMatrix();
glTranslatef(0.7,0.32,0.45);
//stand
glPushMatrix();
glColor3ub(128, 0, 128);
glScalef(0.05,1.0,0.1);
glTranslatef(0,-0.05,0);
glutSolidCube(0.2);
glPopMatrix();
//umbrella
glPushMatrix();
glColor3ub(0, 255, 255);
glRotatef(-90,1,0,0);
glutSolidCone(0.1,0.05,30,30);
glPopMatrix();
//table
glPushMatrix();
glColor3ub(107, 142, 35);
glTranslatef(0,-0.09,0);
glRotatef(100,1,0,0);
glutSolidCone(0.06,0.0,30,30);
glPopMatrix();
//table stand
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-0.15,0);
glRotatef(100,1,0,0);
glutSolidCone(0.02,0.0,30,30);
glPopMatrix();
//chair 1
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 2
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(-0.4,-0.215,0);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 3
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,-0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//chair 4
glPushMatrix();
glColor3ub(0, 255, 255);
glScalef(0.2,0.6,0.2);
glTranslatef(0,-0.215,0.4);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();
///umbrella table 4 end

//roof right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,1.43);
glTranslatef(17.89,0.42,0.31);
glutSolidCube(0.2);
glPopMatrix();
//roof front wall
glPushMatrix();
glColor3ub(20,20,240);
glTranslatef(0,0.21,0.59);
glScalef(9,0.5,0.05);
glutSolidCube(0.2);
glPopMatrix();

glPopMatrix();


///roof
glPushMatrix();
glColor3ub(255,0,0);
glScalef(3.05,0.02,1.2);
glTranslatef(0,23,0.025);
glutSolidCube(0.6);
glPopMatrix();

///roof back wall
glPushMatrix();
glColor3ub(72, 61, 139);
glScalef(9,0.5,0.05);
glTranslatef(0,1.03,-6.2);
glutSolidCube(0.2);
glPopMatrix();

///roof entrance
glPushMatrix();
glTranslatef(0,-0.937,0);
//body
glPushMatrix();
glColor3ub(0,220,120);
glScalef(1,1.2,1.05);
glTranslatef(0,1.27,-0.15);
glutSolidCube(0.2);
glPopMatrix();
//roof
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.1,0.06,1.2);
glTranslatef(0,27.5,-0.13);
glutSolidCube(0.2);
glPopMatrix();
//door
glPushMatrix();
glColor3ub(140,20,240);
glScalef(0.4,1.0,0.01);
glTranslatef(0,1.51,-5.2);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

/// water tank
glPushMatrix();
glColor3ub(0,0, 0);
glTranslatef(0,-0.94,0);
//body
glPushMatrix();
glScalef(0.5,1.7,0.5);
glTranslatef(0.4,0.876,-0.15);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//cap
glPushMatrix();
glScalef(0.2,0.1,0.2);
glTranslatef(1.01,15.76,-0.36);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();


///roof left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(-17.89,1.03,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(17.89,1.03,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof front wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(9,0.5,0.05);
glTranslatef(0,1.03,7.3);
glutSolidCube(0.2);
glPopMatrix();


glPopMatrix();
/// end of restaurant

}



void lamp(){

glPushMatrix();
///bar 1
glPushMatrix();
glColor3ub(128, 0, 0);
glScalef(0.1,5,0.1);
glutSolidCube(0.2);
glPopMatrix();
///bar 2
glPushMatrix();
glRotatef(90,0,0,1);
glPushMatrix();
glScalef(0.1,1.5,0.1);
glTranslatef(4.9,0.095,0);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
///light
glPushMatrix();
glTranslatef(-0.3,0.45,0);
glPushMatrix();
glColor3ub(210, 105, 30);
glRotatef(-90,1,0,0);
glutSolidCone(0.12,0.05,25,25);
glPopMatrix();
glPopMatrix();

///Light ray
    if(a == 1)
    {
        glPushMatrix();
        glTranslatef(-0.3,-0.5,0.0);
        glRotatef(-90,1.0,0.0,0.0);
        glColor4f(1.0,1.0,0.0,_dark);
        glutSolidCone(0.32,1.0,30,30);
        glPopMatrix();
    }


glPopMatrix();



}


void right_raling()
{
/// right railing

  glPushMatrix();
  glRotatef(70, 0.0, 1.0, -0.01);

  glPushMatrix();
    glColor3ub(192, 192, 192);
    glTranslatef(10,-1.81,0.17);
    glScalef(140,0.8,0.4);
    glutSolidCube(0.2);
 glPopMatrix();
///railing top
  glPushMatrix();
    glColor3ub(165, 42, 42);
    glTranslatef(10,-1.71,0.17);
    glScalef(140,0.01,0.4);
    glutSolidCube(0.2);
 glPopMatrix();


 glPopMatrix();


}

void left_raling()
{
/// left railing


  glPushMatrix();
  glTranslatef(-2.5,0,0);
  glRotatef(70, 0.0, 1.0, -0.01);

  glPushMatrix();
    glColor3ub(192, 192, 192);
    glTranslatef(15,-1.8,0.18);
    glScalef(200,0.8,0.4);
    glutSolidCube(0.2);
 glPopMatrix();
 ///railing top
   glPushMatrix();
    glColor3ub(165, 42, 42);
    glTranslatef(15,-1.71,0.18);
    glScalef(200,0.01,0.4);
    glutSolidCube(0.2);
 glPopMatrix();


 glPopMatrix();



}


void flyover()
{
left_raling();

///lamp
glPushMatrix();
glRotatef(70,0.0,1.0,-0.01);
///lamp 1
glPushMatrix();
glTranslatef(-2,-1.3,-2.15);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

///lamp 2
glPushMatrix();
glTranslatef(4,-1.3,-2.15);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

///lamp 3
glPushMatrix();
glTranslatef(10,-1.3,-2.15);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

///lamp 4
glPushMatrix();
glTranslatef(16,-1.3,-2.15);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

///lamp 5
glPushMatrix();
glTranslatef(22,-1.3,-2.15);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

///lamp 6
glPushMatrix();
glTranslatef(28,-1.3,-2.15);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

///lamp 7
glPushMatrix();
glTranslatef(34,-1.3,-2.15);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

glPopMatrix();

///flyover
    glPushMatrix();
    glRotatef(70,0.0,1.0,-0.01);
//road

    glPushMatrix();
    glColor3ub(128, 128, 128);
    glTranslatef(15,-1.9,-1);
    glScalef(100,.01,6);
    glutSolidCube(0.4);
    glPopMatrix();

///strips
glPushMatrix();
//1
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(-2.5,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//2
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(1,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//3
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(5,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//4
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(10,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//5
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(15,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//6
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(20,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//7
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(25,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();

glPopMatrix();



    ///car 1
    glPushMatrix();
    glTranslatef(_mov2,0.0,0.0);
    glPushMatrix();
    glTranslatef(20,-1.8,-0.3);
    car1();
    glPopMatrix();
    glPopMatrix();


    ///car 2
    glPushMatrix();
    glTranslatef(_mov4,0.0,0.0);
    glPushMatrix();
    glTranslatef(-18.5,-1.8,-1.9);
    glRotatef(180,0.0,1.0,0.0);
    car2();
    glPopMatrix();
    glPopMatrix();

///bus 1
    glPushMatrix();
    glTranslatef(_mov5,0.0,0.0);
    glPushMatrix();
    glTranslatef(-11.5,-1.5,-1.35);
    glRotatef(180,0.0,1.0,0.0);
    bus();
    glPopMatrix();
    glPopMatrix();


glPopMatrix();

 right_raling();

    ///pillar 1
    glColor3ub(211, 211, 211);
    glPushMatrix();
    glTranslatef(1.3,-2.2,-3.5);
    glScalef(0.8,2.5,0.5);
    glutSolidCube(0.2);
    glPopMatrix();

    ///pillar 2
    glColor3ub(211, 211, 211);
    glPushMatrix();
    glTranslatef(3.6,-2.3,-10);
    glScalef(0.8,2.5,0.5);
    glutSolidCube(0.2);
    glPopMatrix();


}

void road()
{

///lamp 1
glPushMatrix();
glTranslatef(-6,-2.2,-3);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

///lamp 2
glPushMatrix();
glTranslatef(3,-2.2,-3);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

///lamp 3
glPushMatrix();
glTranslatef(6,-2.2,-3);
glRotatef(90,0,1,0);
lamp();
glPopMatrix();

/// road
glPushMatrix();
glTranslatef(0,0,-0.1);
glRotatef(10, 1.0, 0.0, 0.0);
    glPushMatrix();
    glColor3ub(105, 105, 105);
    glTranslatef(0,-3,-1);
    glScalef(45,.01,7);
    glutSolidCube(0.4);
    glPopMatrix();
///1st border strip
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0,-2.99,-2.26);
    glScalef(45,.01,0.3);
    glutSolidCube(0.4);
    glPopMatrix();

///middle strips
glPushMatrix();
glTranslatef(-4,-1.1,0);

//1
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(-2.5,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//2
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(1,-1.89,-1);
    glScalef(5,.01,0.4);
    //glutSolidCube(0.4);
    glPopMatrix();
//3
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(5,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//4
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(10,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//5
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(15,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//6
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(20,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();
//7
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(25,-1.89,-1);
    glScalef(5,.01,0.4);
    glutSolidCube(0.4);
    glPopMatrix();

glPopMatrix();

///2nd border strip
    glPushMatrix();
    glColor3ub(255, 255, 255);
    glTranslatef(0,-2.99,0.26);
    glScalef(45,0.01,0.3);
    glutSolidCube(0.4);
    glPopMatrix();


/// lower car 1
    glPushMatrix();
    glTranslatef(_mov,0.0,0.0);
    glPushMatrix();
    glTranslatef(8.5,-2.87,0.05);
    car1();
    glPopMatrix();
    glPopMatrix();

/// lower car 2
    glPushMatrix();
    glTranslatef(_mov1,0.0,0.0);
    glPushMatrix();
    glTranslatef(-9.5,-2.87,-1.6);
    glRotatef(180,0.0,1.0,0.0);
    car2();
    glPopMatrix();
    glPopMatrix();

/// lower bus 1
    glPushMatrix();
    glTranslatef(_mov11,0.0,0.0);
    glPushMatrix();
    glTranslatef(8.5,-2.6,-0.6);
    bus();
    glPopMatrix();
    glPopMatrix();

glPopMatrix();

}


void balcony()
{
///left balcony start
glPushMatrix();
//door
glPushMatrix();
glColor3ub(140,20,240);
glScalef(0.3,1.1,0.01);
glTranslatef(-0.34,-0.037,30);
glutSolidCube(0.2);
glPopMatrix();

//window
glPushMatrix();
glColor3ub(_light1,_light1,_light1);
glScalef(0.54,0.5,0.01);
glTranslatef(-0.4,0.035,30);
glutSolidCube(0.2);
glPopMatrix();

//floor
glPushMatrix();
glColor3ub(0,250,0);
glScalef(1.2,0.06,0.3);
glTranslatef(-0.15,-2.6,1.1);
glutSolidCube(0.2);
glPopMatrix();

//right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,0.25);
glTranslatef(-1.3,-0.2,1.3);
glutSolidCube(0.2);
glPopMatrix();

//left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,0.25);
glTranslatef(-5.9,-0.2,1.3);
glutSolidCube(0.2);
glPopMatrix();

//front wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(1.2,0.5,0.05);
glTranslatef(-0.15,-0.2,7.1);
glutSolidCube(0.2);
glPopMatrix();


glPopMatrix();
///left balcony end

///right balcony start
glPushMatrix();
glTranslatef(0.36,0,0);
//door
glPushMatrix();
glColor3ub(140,20,240);
glScalef(0.3,1.1,0.01);
glTranslatef(-0.86,-0.037,30);
glutSolidCube(0.2);
glPopMatrix();

//window
glPushMatrix();
glColor3ub(_light1,_light1,_light1);
glScalef(0.54,0.5,0.01);
glTranslatef(-0.27,0.035,30);
glutSolidCube(0.2);
glPopMatrix();

//floor
glPushMatrix();
glColor3ub(0,250,0);
glScalef(1.2,0.06,0.3);
glTranslatef(-0.15,-2.6,1.1);
glutSolidCube(0.2);
glPopMatrix();

//right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,0.25);
glTranslatef(-1.3,-0.2,1.3);
glutSolidCube(0.2);
glPopMatrix();

//left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,0.25);
glTranslatef(-5.9,-0.2,1.3);
glutSolidCube(0.2);
glPopMatrix();

//front wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(1.2,0.5,0.05);
glTranslatef(-0.15,-0.2,7.1);
glutSolidCube(0.2);
glPopMatrix();

glPopMatrix();
///right balcony end

}


void left_window()
{
    ///left window 1
glPushMatrix();
glColor3ub(_light1,_light1,_light1);
glScalef(0.01,0.5,0.5);
glTranslatef(-30.1,0,0.3);
glutSolidCube(0.2);
glPopMatrix();

///left window 2
glPushMatrix();
glColor3ub(_light1,_light1,_light1);
glScalef(0.01,0.5,0.5);
glTranslatef(-30.1,0,-0.3);
glutSolidCube(0.2);
glPopMatrix();

}

void right_window()
{

///right window 1
glPushMatrix();
glColor3ub(_light1,_light1,_light1);
glScalef(0.01,0.5,0.5);
glTranslatef(30.1,0,0.3);
glutSolidCube(0.2);
glPopMatrix();

///right window 2
glPushMatrix();
glColor3ub(_light1,_light1,_light1);
glScalef(0.01,0.5,0.5);
glTranslatef(30.1,0,-0.3);
glutSolidCube(0.2);
glPopMatrix();
}

void back_window()
{
///back window
glPushMatrix();
glColor3ub(_light1,_light1,_light1);
glScalef(0.2,0.8,0.01);
glTranslatef(0,0,-30.1);
glutSolidCube(0.2);
glPopMatrix();
}

void floor_body()
{
///body
glPushMatrix();
//glColor3ub(255,220,120);
glScalef(1,0.5,1);
glutSolidCube(0.6);
glPopMatrix();
///floor
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.04,0.02,1);
glTranslatef(0,-7.8,0);
glutSolidCube(0.6);
glPopMatrix();
}

void building1(){

/// start of building
glPushMatrix();

///ground floor
 glPushMatrix();
 //body
glPushMatrix();
glColor3ub(255,220,120);
glScalef(1,0.5,1);
glutSolidCube(0.6);
glPopMatrix();
//floor
glPushMatrix();
glColor3ub(0,0,0);
glScalef(1.02,0.03,1.02);
glTranslatef(0,-5.3,0);
glutSolidCube(0.6);
glPopMatrix();
///main gate
//ground part
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(2.6,0.1,0.6);
glTranslatef(0,-1.6,0.6);
glutSolidCube(0.2);
glPopMatrix();
//gate
glPushMatrix();
glColor3ub(140,20,240);
glScalef(2.2,1.1,0.01);
glTranslatef(0,-0.035,30);
glutSolidCube(0.2);
glPopMatrix();
//sub gate
glPushMatrix();
glColor3ub(139, 0, 139);
glScalef(0.4,0.9,0.01);
glTranslatef(0.45,-0.065,30);
glutSolidCube(0.2);
glPopMatrix();
//left pillar
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(-1.57,-0.035,1.54);
glutSolidCube(0.2);
glPopMatrix();
//middle pillar
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(0.7,-0.035,1.54);
glutSolidCube(0.2);
glPopMatrix();
//right pillar
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(1.57,-0.035,1.54);
glutSolidCube(0.2);
glPopMatrix();
//pillar roof
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(2.5,0.2,0.21);
glTranslatef(0,0.45,1.54);
glutSolidCube(0.2);
glPopMatrix();

glPopMatrix();

///1st floor
glPushMatrix();
glTranslatef(0,0.31,0);
back_window();
right_window();
glPushMatrix();
glColor3ub(255,220,120);
floor_body();
glPopMatrix();
balcony();
left_window();
glPopMatrix();

///2nd floor
glPushMatrix();
glTranslatef(0,0.62,0);
back_window();
right_window();
glPushMatrix();
glColor3ub(255,220,120);
floor_body();
glPopMatrix();
balcony();
left_window();
glPopMatrix();

///3rd floor
glPushMatrix();
glTranslatef(0,0.93,0);
back_window();
right_window();
glPushMatrix();
glColor3ub(255,220,120);
floor_body();
glPopMatrix();
balcony();
left_window();
glPopMatrix();

 ///4th floor
glPushMatrix();
glTranslatef(0,1.24,0);
back_window();
right_window();
glPushMatrix();
glColor3ub(255,220,120);
floor_body();
glPopMatrix();
balcony();
left_window();
glPopMatrix();

///roof
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.05,0.02,1.2);
glTranslatef(0,69.8,0.025);
glutSolidCube(0.6);
glPopMatrix();

///roof back wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(3,0.5,0.05);
glTranslatef(0,2.905,-6.2);
glutSolidCube(0.2);
glPopMatrix();

///roof entrance
glPushMatrix();
//body
glPushMatrix();
glColor3ub(0,220,120);
glScalef(1,1.2,1.05);
glTranslatef(0,1.27,-0.15);
glutSolidCube(0.2);
glPopMatrix();
//roof
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.1,0.06,1.2);
glTranslatef(0,27.5,-0.13);
glutSolidCube(0.2);
glPopMatrix();
//door
glPushMatrix();
glColor3ub(140,20,240);
glScalef(0.4,1.0,0.01);
glTranslatef(0,1.51,-5.2);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

/// water tank 1
glPushMatrix();
//body
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.5,1.7,0.5);
glTranslatef(0.4,0.876,-0.15);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//cap
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.2,0.1,0.2);
glTranslatef(1.01,15.76,-0.36);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();


/// water tank 2
glPushMatrix();
//body
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.5,1.7,0.5);
glTranslatef(0.4,0.876,0.08);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//cap
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.2,0.1,0.2);
glTranslatef(1.01,15.76,0.22);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();


///roof left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(-5.89,2.905,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(5.89,2.905,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof front wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(3,0.5,0.05);
glTranslatef(0,2.905,7.3);
glutSolidCube(0.2);
glPopMatrix();



glPopMatrix();
/// end of building

}

void building2(){

/// start of building
glPushMatrix();

///ground floor
 glPushMatrix();
 //body
glPushMatrix();
glColor3ub(0, 250, 154);
glScalef(1,0.5,1);
glutSolidCube(0.6);
glPopMatrix();
//floor
glPushMatrix();
glColor3ub(0,0,0);
glScalef(1.02,0.03,1.02);
glTranslatef(0,-5.3,0);
glutSolidCube(0.6);
glPopMatrix();
///main gate
//ground part
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(2.6,0.1,0.6);
glTranslatef(0,-1.6,0.6);
glutSolidCube(0.2);
glPopMatrix();
//gate
glPushMatrix();
glColor3ub(140,20,240);
glScalef(2.2,1.1,0.01);
glTranslatef(0,-0.035,30);
glutSolidCube(0.2);
glPopMatrix();
//sub gate
glPushMatrix();
glColor3ub(139, 0, 139);
glScalef(0.4,0.9,0.01);
glTranslatef(0.45,-0.065,30);
glutSolidCube(0.2);
glPopMatrix();
//left pillar
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(-1.57,-0.035,1.54);
glutSolidCube(0.2);
glPopMatrix();
//middle pillar
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(0.7,-0.035,1.54);
glutSolidCube(0.2);
glPopMatrix();
//right pillar
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.15,1.1,0.21);
glTranslatef(1.57,-0.035,1.54);
glutSolidCube(0.2);
glPopMatrix();
//pillar roof
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(2.5,0.2,0.21);
glTranslatef(0,0.45,1.54);
glutSolidCube(0.2);
glPopMatrix();

glPopMatrix();

///1st floor
glPushMatrix();
glTranslatef(0,0.31,0);
back_window();
right_window();
glPushMatrix();
glColor3ub(0, 250, 154);
floor_body();
glPopMatrix();
balcony();
left_window();
glPopMatrix();

///2nd floor
glPushMatrix();
glTranslatef(0,0.62,0);
back_window();
right_window();
glPushMatrix();
glColor3ub(0, 250, 154);
floor_body();
glPopMatrix();
balcony();
left_window();
glPopMatrix();

///3rd floor
glPushMatrix();
glTranslatef(0,0.93,0);
back_window();
right_window();
glPushMatrix();
glColor3ub(0, 250, 154);
floor_body();
glPopMatrix();
balcony();
left_window();
glPopMatrix();

 ///4th floor
glPushMatrix();
glTranslatef(0,1.24,0);
back_window();
right_window();
glPushMatrix();
glColor3ub(0, 250, 154);
floor_body();
glPopMatrix();
balcony();
left_window();
glPopMatrix();

///roof
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.05,0.02,1.2);
glTranslatef(0,69.8,0.025);
glutSolidCube(0.6);
glPopMatrix();

///roof back wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(3,0.5,0.05);
glTranslatef(0,2.905,-6.2);
glutSolidCube(0.2);
glPopMatrix();

///roof entrance
glPushMatrix();
//body
glPushMatrix();
glColor3ub(0,220,120);
glScalef(1,1.2,1.05);
glTranslatef(0,1.27,-0.15);
glutSolidCube(0.2);
glPopMatrix();
//roof
glPushMatrix();
glColor3ub(255,0,0);
glScalef(1.1,0.06,1.2);
glTranslatef(0,27.5,-0.13);
glutSolidCube(0.2);
glPopMatrix();
//door
glPushMatrix();
glColor3ub(140,20,240);
glScalef(0.4,1.0,0.01);
glTranslatef(0,1.51,-5.2);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();

/// water tank 1
glPushMatrix();
//body
glPushMatrix();
glColor3ub(0,0,0);
glScalef(0.5,1.7,0.5);
glTranslatef(0.4,0.876,-0.15);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//cap
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.2,0.1,0.2);
glTranslatef(1.01,15.76,-0.36);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();


/// water tank 2
glPushMatrix();
//body
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.5,1.7,0.5);
glTranslatef(0.4,0.876,0.08);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
//cap
glPushMatrix();
glColor3ub(0, 0, 0);
glScalef(0.2,0.1,0.2);
glTranslatef(1.01,15.76,0.22);
glRotatef(90,1,0,0);
glutSolidTorus(0.05,0.05,25,25);
glPopMatrix();
glPopMatrix();


///roof left wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(-5.89,2.905,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof right wall
glPushMatrix();
glColor3ub(120,100,120);
glScalef(0.05,0.5,3.31);
glTranslatef(5.89,2.905,0.009);
glutSolidCube(0.2);
glPopMatrix();
///roof front wall
glPushMatrix();
glColor3ub(20,20,240);
glScalef(3,0.5,0.05);
glTranslatef(0,2.905,7.3);
glutSolidCube(0.2);
glPopMatrix();



glPopMatrix();
/// end of building

}

void right_building()
{
glPushMatrix();
glTranslatef(4.15,-2.4,-6);
glScalef(3,2,2);
//building 1
building1();
//building 2
glPushMatrix();
glTranslatef(0.7,0,0);
building2();
glPopMatrix();
//building 3
glPushMatrix();
glTranslatef(1.4,0,0);
building1();
glPopMatrix();
//building 4
glPushMatrix();
glTranslatef(2.1,0,0);
building2();
glPopMatrix();

glPopMatrix();
}

void left_building()
{
///buildings
glPushMatrix();
glTranslatef(-4,-2.5,-6);
glScalef(3,2,2);

glRotatef(73,0.0,1.0,0);
///building 1
glPushMatrix();
glTranslatef(1,0,0);
building1();
glPopMatrix();
///building 2
glPushMatrix();
glTranslatef(2,0,0);
building2();
glPopMatrix();
///building 3
glPushMatrix();
glTranslatef(3,0,0);
building1();
glPopMatrix();
///building 4
glPushMatrix();
glTranslatef(4,0,0);
building2();
glPopMatrix();
///building 5
glPushMatrix();
glTranslatef(5,0,0);
building1();
glPopMatrix();
///building 6
glPushMatrix();
glTranslatef(6,0,0);
building2();
glPopMatrix();
///building 7
glPushMatrix();
glTranslatef(7,0,0);
building1();
glPopMatrix();
///building 8
glPushMatrix();
glTranslatef(8,0,0);
building2();
glPopMatrix();
///building 9
glPushMatrix();
glTranslatef(9,0,0);
building1();
glPopMatrix();
///building 10
glPushMatrix();
glTranslatef(10,0,0);
building2();
glPopMatrix();


glPopMatrix();
///buildings end

//building
glPushMatrix();
glTranslatef(-9.4,-2.4,-6);
glScalef(3,2,2);
building1();
glPopMatrix();

///restaurant
glPushMatrix();
glTranslatef(-5.5,-2.4,-6.5);
glScalef(2.8,2.3,2);
restaurant();
glPopMatrix();

}


void sky()
{
  ///sky
    glPushMatrix();
    glColor3ub(0, 255, 255);
    glTranslatef(0,12,-39);
    glScalef(190,45,0);
    glutSolidCube(0.4);
    glPopMatrix();
}

void cloud()
{
glPushMatrix();
glTranslatef(_mov10,0.0,0.0);
glPushMatrix();
glTranslatef(-56,-1,-34);
glScalef(6,6,1);

///right cloud1
    glPushMatrix();
    glTranslatef(2,.05,0.0);
    ///cloud1 spare1
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.15,2.5,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare2
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.35,2.3,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare3
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.4,2.6,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare4
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,2.5,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare5
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,2.3,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
      ///cloud1 spare6
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(1,2.4,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    glPopMatrix();

///right cloud2

    glPushMatrix();
    glTranslatef(2.9,.05,0.0);
    ///cloud1 spare1
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.15,2.5,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare2
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.35,2.3,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare3
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.4,2.6,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare4
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,2.5,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare5
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,2.3,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
      ///cloud1 spare6
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(1,2.4,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    glPopMatrix();

///left cloud1
    glPushMatrix();
    glTranslatef(-2,.05,0.0);
    ///cloud1 spare1
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.15,2.5,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare2
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.35,2.3,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare3
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.4,2.6,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare4
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,2.5,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare5
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,2.3,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
      ///cloud1 spare6
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(1,2.4,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    glPopMatrix();

///left cloud2
    glPushMatrix();
    glTranslatef(-2.5,.08,0.0);
    ///cloud1 spare1
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.15,2.5,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare2
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.35,2.3,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare3
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0.4,2.6,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare4
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,2.5,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    ///cloud1 spare5
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(.7,2.3,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
      ///cloud1 spare6
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(1,2.4,0.0);
    glutSolidSphere(.20,30,30);
    glPopMatrix();
    glPopMatrix();


glPopMatrix();
glPopMatrix();


}

void sun()
{
    glPushMatrix();
    glTranslatef(0.0,_mov8,0.0);
glPushMatrix();
    glTranslatef(3,12,-38);
    glScalef(4,4,1);
    glColor3ub(255, 255, 0);
    glutSolidSphere(.80,30,30);
glPopMatrix();
    glPopMatrix();

}

void forest_tree()
{
///tree
glPushMatrix();
glTranslatef(0,7.5,-35.5);
glScalef(1,2,1);
glColor3ub(128, 0, 0);
//trunk
glPushMatrix();
glScalef(0.8,4,0.1);
glutSolidCube(0.2);
glPopMatrix();
//tree stalks left
glPushMatrix();
glTranslatef(-0.2,0.4,0);
glRotatef(45,0,0,1);
glPushMatrix();
glScalef(0.5,2.5,0.1);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
//tree stalks right
glPushMatrix();
glTranslatef(0.2,0.5,0);
glRotatef(-45,0,0,1);
glPushMatrix();
glScalef(0.5,2.5,0.1);
glutSolidCube(0.2);
glPopMatrix();
glPopMatrix();
glPopMatrix();
}

void forest()
{
///forest
glPushMatrix();
glColor3ub(0, 255, 0);
glTranslatef(0,-3,-36);
glScalef(7,7,1);

//forest sphere 1
glPushMatrix();
glTranslatef(-2.7,1.6,0.0);
glutSolidSphere(.40,15,30);
glPopMatrix();
//forest sphere 2
glPushMatrix();
glTranslatef(-2,1.7,0.0);
glutSolidSphere(.50,20,30);
glPopMatrix();
//forest sphere 3
glPushMatrix();
glTranslatef(-4.8,1.7,0.0);
glutSolidSphere(.60,30,30);
glPopMatrix();
//forest sphere 4
glPushMatrix();
glTranslatef(-4,1.5,0.0);
glutSolidSphere(.60,30,30);
glPopMatrix();
//forest sphere 5
glPushMatrix();
glTranslatef(-3.3,1.5,0.0);
glutSolidSphere(.40,30,30);
glPopMatrix();
//forest sphere 6
glPushMatrix();
glTranslatef(-1.5,1.5,0.0);
glutSolidSphere(.50,30,30);
glPopMatrix();
//forest sphere 7
glPushMatrix();
glTranslatef(-.9,1.4,0.0);
glutSolidSphere(.40,30,30);
glPopMatrix();
//forest sphere 8
glPushMatrix();
glTranslatef(-.2,1.4,0.0);
glutSolidSphere(.50,30,30);
glPopMatrix();
//forest sphere 9
glPushMatrix();
glTranslatef(.5,1.4,0.0);
glutSolidSphere(.40,20,30);
glPopMatrix();
//forest sphere 10
glPushMatrix();
glTranslatef(1,1.4,0.0);
glutSolidSphere(.50,30,30);
glPopMatrix();
//forest sphere 10
glPushMatrix();
glTranslatef(1.5,1.4,0.0);
glutSolidSphere(.50,30,30);
glPopMatrix();
//forest sphere 11
glPushMatrix();
glTranslatef(2,1.65,0.0);
glutSolidSphere(.50,30,30);
glPopMatrix();
//forest sphere 12
glPushMatrix();
glTranslatef(2.7,1.4,0.0);
glutSolidSphere(.50,30,30);
glPopMatrix();
//forest sphere 13
glPushMatrix();
glTranslatef(3.5,1.6,0.0);
glutSolidSphere(.50,30,30);
glPopMatrix();
//forest sphere 14
glPushMatrix();
glTranslatef(4.2,1.4,0.0);
glutSolidSphere(.50,30,30);
glPopMatrix();
//forest sphere 15
glPushMatrix();
glTranslatef(4.9,1.5,0.0);
glutSolidSphere(.3,30,30);
glPopMatrix();

glPopMatrix();

//tree 1
glPushMatrix();
glTranslatef(-32.5,0,0.1);
forest_tree();
glPopMatrix();
//tree 2
glPushMatrix();
glTranslatef(-30.5,0,0.1);
forest_tree();
glPopMatrix();
//tree 3
glPushMatrix();
glTranslatef(-27.5,-0.2,0.1);
forest_tree();
glPopMatrix();
//tree 4
glPushMatrix();
glTranslatef(-22.5,-0.4,0.0);
forest_tree();
glPopMatrix();
//tree 5
glPushMatrix();
glTranslatef(-18.5,-0.1,0.0);
forest_tree();
glPopMatrix();
//tree 6
glPushMatrix();
glTranslatef(-13.5,0,0.0);
forest_tree();
glPopMatrix();
//tree 7
glPushMatrix();
glTranslatef(-9.5,-0.2,0.0);
forest_tree();
glPopMatrix();
//tree 8
glPushMatrix();
glTranslatef(-6.0,-0.6,0.0);
forest_tree();
glPopMatrix();
//tree 9
glPushMatrix();
glTranslatef(-1.5,-0.5,0.0);
forest_tree();
glPopMatrix();
//tree 10
glPushMatrix();
glTranslatef(3.5,-0.6,0.0);
forest_tree();
glPopMatrix();
//tree 11
glPushMatrix();
glTranslatef(6.5,-0.4,0.0);
forest_tree();
glPopMatrix();
//tree 12
glPushMatrix();
glTranslatef(9.5,-0.4,0.0);
forest_tree();
glPopMatrix();
//tree 13
glPushMatrix();
glTranslatef(13.5,0,0.0);
forest_tree();
glPopMatrix();
//tree 14
glPushMatrix();
glTranslatef(18.5,-0.6,0.0);
forest_tree();
glPopMatrix();
//tree 15
glPushMatrix();
glTranslatef(24.5,0,0.0);
forest_tree();
glPopMatrix();
//tree 16
glPushMatrix();
glTranslatef(29.5,-0.5,0.0);
forest_tree();
glPopMatrix();
//tree 17
glPushMatrix();
glTranslatef(33.8,-0.5,0.0);
forest_tree();
glPopMatrix();

}

void ship()
{
///start of ship

glPushMatrix();

///Body start
    glPushMatrix();
    glColor3ub(0,0,0);
    glScalef(1.5,0.8,0.4);
    glutSolidCube(0.5);
    glPopMatrix();

///front cone

glPushMatrix();
glScalef(2,0.8,1);
glTranslatef(-0.18,0,0.0);
glRotatef(10, 0.0, 0.0, 1.0);
glPushMatrix();
glRotatef(-90, 0.0, 1.0, 0.0);
glPushMatrix();
glScalef(0.4,1.0,0.2);
glColor3ub(0,0,0);
glRotatef(-40, 1.0, 0.0, 0.0);
glutSolidCone(0.4,0.6,25,25);
glPopMatrix();
glPopMatrix();
glPopMatrix();

///back cone
glPushMatrix();
glRotatef(180, 0.0, 1.0, 0.0);
glPushMatrix();
glScalef(2,0.8,1);
glTranslatef(-0.18,0,0.0);
glRotatef(10, 0.0, 0.0, 1.0);
glPushMatrix();
glRotatef(-90, 0.0, 1.0, 0.0);
glPushMatrix();
glScalef(0.4,1.0,0.2);
glColor3ub(0,0,0);
glRotatef(-40, 1.0, 0.0, 0.0);
glutSolidCone(0.4,0.6,25,25);
glPopMatrix();
glPopMatrix();
glPopMatrix();
glPopMatrix();

///1st floor
glPushMatrix();
glColor3ub(220, 20, 60);
glTranslatef(0.125,0.276,0.0);
glScalef(1.0,0.3,0.4);
glutSolidCube(0.5);
glPopMatrix();

///2nd floor
glPushMatrix();
glColor3ub(106, 90, 205);
glTranslatef(0.18,0.432,0.0);
glScalef(0.7,0.3,0.4);
glutSolidCube(0.5);
glPopMatrix();

///pipe
glPushMatrix();
glColor3ub(230, 230, 250);
glTranslatef(0.18,0.63,0.0);
glScalef(0.2,0.5,0.2);
glutSolidCube(0.5);
glPopMatrix();

glPopMatrix();

///end of ship
}

void wave()
{
glPushMatrix();
glColor3ub(30, 144, 255);
//glColor3ub(255, 0, 255);
//glScalef(1,1,1);
glTranslatef(0,0.7,-33);
//sphere 1
glPushMatrix();
glTranslatef(-30.5,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();
//sphere 2
glPushMatrix();
glTranslatef(-28.8,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();
//sphere 3
glPushMatrix();
glTranslatef(-27.1,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();
//sphere 4
glPushMatrix();
glTranslatef(-25.4,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();
//sphere 5
glPushMatrix();
glTranslatef(-23.7,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();
//sphere 6
glPushMatrix();
glTranslatef(-22,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();
//sphere 7
glPushMatrix();
glTranslatef(-20.3,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();
//sphere 8
glPushMatrix();
glTranslatef(-18.6,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();
//sphere 9
glPushMatrix();
glTranslatef(-16.9,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();
//sphere 10
glPushMatrix();
glTranslatef(-15.2,0,0);
glutSolidSphere(1,30,30);
glPopMatrix();


glPopMatrix();
}


void river()
{
  ///river
   glPushMatrix();
    glColor3ub(30, 144, 255);
    glTranslatef(0,3,-35);
    glScalef(170,18,1);
    glutSolidCube(0.4);
    glPopMatrix();

///ship 1
glPushMatrix();
  glTranslatef(-35,4.5,-34);
  glScalef(5,2,2);
  glTranslatef(_mov3,0,0.0);
  glRotatef(180,0,1,0);
  ship();
glPopMatrix();

///wave 1
glPushMatrix();
glTranslatef(0,2.6,-1);
//1st
wave();
//2nd
glPushMatrix();
glTranslatef(17,0,0);
wave();
glPopMatrix();
//3rd
glPushMatrix();
glTranslatef(34,0,0);
wave();
glPopMatrix();
//4th
glPushMatrix();
glTranslatef(51,0,0);
wave();
glPopMatrix();

glPopMatrix();

///ship 2
glPushMatrix();
  glTranslatef(35,1.85,-33);
  glScalef(5,2,2);
  glTranslatef(-_mov6,0,0.0);
  ship();
glPopMatrix();

///wave 2
glPushMatrix();
//1st
wave();
//2nd
glPushMatrix();
glTranslatef(17,0,0);
wave();
glPopMatrix();
//3rd
glPushMatrix();
glTranslatef(34,0,0);
wave();
glPopMatrix();
//4th
glPushMatrix();
glTranslatef(51,0,0);
wave();
glPopMatrix();

glPopMatrix();

}

//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.000, 0.392, 0.000,0.0);
	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units

glPushMatrix();
//glRotatef(_angle1, 0.0, -1.0,0.0);
//glRotatef(10, 1.0, 0.0, 1.0);

    sky();
    forest();
    sun();
    cloud();
    river();
    tree_row();
    left_building();
    road();
    flyover();
    right_building();
    plane();

glPopMatrix();

    //transparency
    glPushMatrix();
    glTranslatef(0.0,0.0,4.0);
    glPushMatrix();
    glScalef(5.0,5.0,0.05);
    glColor4f(0.0,0.0,0.0,_dark);
    glutSolidCube(1.0);
    glPopMatrix();
    glPopMatrix();


	glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch(key)
    {
    case 'n':
        //a = 1;
        //_dark = 0.6;
        //_light1 = 255;
        _hlight = 1.0;
        pos = 1;
        break;

    case 'd':
        pos1 = 1;
        break;

    case 'r':
        c1 = 1;
        c2 = 1;
        b2 = 1;
        break;

    case 'R':
        c1 = 0;
        c2 = 0;
        b2 = 0;
        break;


    case 'f':
        c3 = 1;
        c4 = 1;
        b1 = 1;
        break;

    case 'F':
        c3 = 0;
        c4 = 0;
        b1 = 0;
        break;

    case 'b':
        s1 = 1;
        s2 = 1;
        break;

    case 'B':
        s1 = 0;
        s2 = 0;
        break;

    case 'c':
        m1 = 1;
        break;

    case 'C':
        m1 = 0;
        break;

    case 'p':
        p1 = 1;
        break;

    case 'P':
        p1 = 0;
        break;

        default:
        break;

    }
}

void myInit()
{
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
   GLfloat mat_shininess[] = { 100.0 };
   GLfloat light_position[] = { .20, 0.50, 1.0, 0.0 };
   GLfloat white_light[] = { 0.20, 0.60, 1.0, 0.0 };

   glClearColor (0.60, 0.50, 0.0, 1.0);
   glShadeModel (GL_SMOOTH);

   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

   glLightfv(GL_LIGHT0, GL_POSITION, light_position);

   glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
   glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);


    /* set up depth-buffering */
    glEnable(GL_DEPTH_TEST);

    /* turn on default lighting */
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    /* define the projection transformation */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40,1,4,20);

    /* define the viewing transformation */
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    //gluLookAt(10.0,5.0,0.0,0.0,0.0,0.0,0.0,2.0,0.0);
    gluLookAt(10,10,10,0.0,0.0,0.0,0.0,2.0,0.0);
}


void update(int value) {
	_angle += 2.0f;
	if (_angle > 360) {
		_angle -= 360;
	}

    _angle1 += 0.5f;
	if (_angle1 > 360) {
		_angle1 -= 360;
	}
	_angle2 += 100.0f;
	if (_angle2 > 360) {
		_angle2 -= 360;
	}

///1st car moving
    if(c1 == 0)
    {
        _mov -= 0.04f;
        if (_mov < -16.5)
        {
            _mov += 16.5;
        }
    }
    else
    {
        _mov += 0.0f;
    }

///2nd car moving
    if(c2 == 0)
    {
       _mov1 += 0.05f;
        if(_mov1 > 18.0)
        {
            _mov1 -= 18.0;
        }
    }
    else
    {
        _mov1 +=0.0f;
    }
///road bus moving
    if(b2 == 0)
    {
       _mov11 -= 0.05f;
        if(_mov11 < -18.0)
        {
            _mov11 += 18.0;
        }
    }
    else
    {
        _mov11 +=0.0f;
    }

///flyover 1st car moving
    if(c3 == 0)
    {
        _mov2 -= 0.1f;
        if (_mov2 < -45.0)
        {
            _mov2 += 45.0;
        }
    }
    else
    {
        _mov2 += 0.0f;
    }

///flyover 2nd car moving
    if(c4 == 0)
    {
        _mov4 += 0.1f;
        if(_mov4 >50.0)
        {
            _mov4 -=50.0;
        }
    }
    else
    {
        _mov4 += 0.0f;
    }

///flyover bus moving
    if(b1 == 0)
    {
         _mov5 += 0.1f;
        if(_mov5 >50.0)
        {
            _mov5 -=50.0;
        }
    }
    else
    {
        _mov5 += 0.0f;
    }

///ship 1 moving
   if(s1 == 0)
    {
    _mov3 += 0.01f;
    if (_mov3 > 30.5)
     {
        _mov3 -= 30.5;
     }
    }
    else
    {
        _mov3 += 0.0f;
    }

///ship 2 moving
   if(s2 == 0)
    {
    _mov6 += 0.03f;
    if(_mov6 >30.0)
     {
        _mov6 -=30.0;
     }
    }
    else
    {
        _mov6 += 0.0f;
    }
///cloud moving
   if(m1 == 0)
    {
    _mov10 += 0.01f;
    if(_mov10 >130.0)
     {
        _mov10 -=130.0;
     }
    }
    else
    {
        _mov10 += 0.0f;
    }
///plane moving
    if(p1 == 0)
    {
    _mov9 -=0.05f;
    if(_mov9 < -36.0)
     {
        _mov9 += 36.0;
     }
    }
    else
    {
        _mov9 += 0.0f;
    }


///
    if(pos == 1)
    {
        _mov8 -= 0.1f;
        if(_mov8 <= -6.0)
        {
            _dark = 0.6;
            _mov8 += 0.0f;
            a = 1;
            _light1 = 255;
            pos = 0;


        }

    }

    if(pos1 == 1)
    {
        _mov8 += 0.1f;
        if(_mov8 >= 0.2)
        {
            _dark = 0.0;
            _light1 = 0;
            _hlight = 0.0;
            a = 0;
            _mov8 += 0.0f;
            pos1 = 0;
        }
    }


	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(25, update, 0);
}


int main(int argc, char** argv) {

    cout<<"***********Instructions*************"<<endl;
    cout<<endl;
    cout<<"1: Press 'n' to go Night Mood."<<endl;
    cout<<endl;
    cout<<"2: Press 'd' to go Day Mood."<<endl;
    cout<<endl;
    cout<<"3: Press 'r' to pause Car & Bus on the road and press 'Shift + r' to play."<<endl;
    cout<< endl;
    cout<<"4: Press 'f' to pause Car & Bus on the flyover and press 'Shift + f' to play."<<endl;
    cout<<endl;
    cout<<"5: Press 'b' to pause Boat and press 'Shift + b' to play."<<endl;
    cout<<endl;
    cout<<"6: Press 'c' to pause Cloud and press 'Shift + c' to play."<<endl;
    cout<<endl;
    cout<<"7: Press 'p' to pause Plane and press 'Shift + p' to play."<<endl;
    cout<<endl;
    cout<<"Enter any character or number to see the scenario: ";
    cin>> q;

	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1300, 700);
	glutInitWindowPosition(5,5);

	//Create the window
	glutCreateWindow("Scenario");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);
	glutKeyboardFunc(keyboard);
    //myInit();
	glutTimerFunc(25, update, 0); //Add a timer

	glutMainLoop();
	return 0;
}







