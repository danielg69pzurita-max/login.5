#pragma once

namespace proyectoZoo {

using namespace System;

public ref class SalesCounter abstract sealed
{
public:
 static int NinioCount =0;
 static int AdultoCount =0;
 static int AdultoMayorCount =0;

 static void AddNinio(int n) {
 NinioCount += n;
 }
 static void AddAdulto(int n) {
 AdultoCount += n;
 }
 static void AddAdultoMayor(int n) {
 AdultoMayorCount += n;
 }
};

}
