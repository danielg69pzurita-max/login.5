#pragma once

namespace proyectoZoo {

using namespace System;

public ref class usuario abstract sealed {
public:
 static String^ CurrentUser = nullptr;
 static String^ CurrentCargo = nullptr;

 static void SetCurrent(String^ user, String^ cargo) {	
 CurrentUser = user;
 CurrentCargo = cargo;
 }
};

}

