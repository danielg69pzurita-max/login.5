#pragma once

namespace proyectoZoo {

using namespace System;

public ref class Boleto sealed {
public:
 // Devuelve las cantidades permitidas como array de enteros (1..10 por defecto)
 static cli::array<int>^ GetAllowedQuantities()
 {
 int max =10; // valor por defecto, se puede cambiar aquí
 cli::array<int>^ arr = gcnew cli::array<int>(max);
 for (int i =0; i < max; i++) arr[i] = i +1;
 return arr;
 }

 // Valor por defecto de cantidad
 static int DefaultQuantity()
 {
 return 1; // por defecto 1 boleto
 }
};

}

