#pragma once

namespace proyectoZoo {

using namespace System;
using namespace System::Windows::Forms;
using namespace System::ComponentModel;
using namespace System::Drawing;

public ref class CantidadBoleto : public System::Windows::Forms::Form
{
public:
 CantidadBoleto(void)
 {
 InitializeComponent();
 }

protected:
 ~CantidadBoleto()
 {
 if (components) delete components;
 }

// include designer-generated members (controls, InitializeComponent, event prototypes)
#include "CantidadBoleto.Designer.h"

};

}
