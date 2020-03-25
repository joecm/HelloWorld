/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/10/16 21:56:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jose Antonio Costa de Moya (), joseantonio.costa250@gmail.com
 *   Organization:  cosmobros.net.org
 *
 * =====================================================================================
 */

#include "ExampleApplication.h"

class SimpleExample : public ExampleApplication {
  public : 
    void createScene() {
      Ogre::Entity *ent = mSceneMgr->createEntity("Sinbad", "Sinbad.mesh");
      mSceneMgr->setAmbientLight(Ogre::ColourValue(1,1,1));
      mSceneMgr->getRootSceneNode()->attachObject(ent);
      //mSceneMgr->setSkyBox(true, "Examples/SpaceSkyBox");
      
    }
};

int main(void)  {
  SimpleExample example;
  example.go();

  return 0;
}


