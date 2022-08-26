
#include "GameObject.h"
#include "Point2D.h"


GameObject::GameObject(char in_code){
    display_code = in_code;
    id_num = 1;
    state = 0;
    cout << "GameObject Constructed" << endl;
}
GameObject::GameObject(Point2D in_loc, int in_id, char in_code){
    display_code = in_code;
    state = 0;
    location = in_loc;
    id_num = in_id;
    cout << "GameObject Constructed" << endl;
}

Point2D GameObject::Getlocation(){
    return Point2D(location);
}

int GameObject::GetId(){
    return id_num;
}

char GameObject::GetState(){
    return state;
}

void GameObject::ShowStatus(){
    cout << '(' << display_code << ')' << '(' << id_num << ')' << "at" << location << endl;
}

