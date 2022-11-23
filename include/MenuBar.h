/**
 * @file MenuBar.h
 * @author Javier Izquierdo (j.izquierdoh.2021@alumnos.urjc.es)
 * @brief Header file of MenuBar.cpp
 * @version 1.0
 * @date 2022-11-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <string>

#ifndef MENUBAR_H
#define	MENUBAR_H

class MenuBar{
  public:
    static MenuBar *Create(const std::string type = "CLI");
    MenuBar(); /* basic constructor */
    virtual ~MenuBar();
    virtual void show() = 0;
    void setUserName(std::string userName);
    void setCurrentMenu(std::string currentMenu);
  protected:
    std::string userName;
    std::string currentMenu;
};

#endif