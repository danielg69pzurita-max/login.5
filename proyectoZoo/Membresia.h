#pragma once

namespace proyectoZoo {

 using namespace System;
 using namespace System::ComponentModel;
 using namespace System::Collections;
 using namespace System::Windows::Forms;
 using namespace System::Data;
 using namespace System::Drawing;

 public ref class Membresia : public System::Windows::Forms::Form
 {
 public:
 Membresia(void)
 {
 InitializeComponent();
 }

 protected:
 ~Membresia()
 {
 if (components)
 delete components;
 }

 private: System::Windows::Forms::RadioButton^ rbIndividual;
 private: System::Windows::Forms::RadioButton^ rbFamiliar;
 private: System::Windows::Forms::Button^ btnAceptar;
 private: System::ComponentModel::IContainer^ components;

 #pragma region Windows Form Designer generated code
 void InitializeComponent(void)
 {
     this->components = (gcnew System::ComponentModel::Container());
     this->rbIndividual = (gcnew System::Windows::Forms::RadioButton());
     this->rbFamiliar = (gcnew System::Windows::Forms::RadioButton());
     this->btnAceptar = (gcnew System::Windows::Forms::Button());
     this->SuspendLayout();
     this->rbIndividual->Location = System::Drawing::Point(20, 20);
     this->rbIndividual->Text = L"Individual";
     this->rbIndividual->Checked = true;
     this->rbFamiliar->Location = System::Drawing::Point(20, 50);
     this->rbFamiliar->Text = L"Familiar";
     this->btnAceptar->Location = System::Drawing::Point(20, 90);
     this->btnAceptar->Text = L"Aceptar";
     this->btnAceptar->Click += gcnew System::EventHandler(this, &Membresia::btnAceptar_Click);
     this->ClientSize = System::Drawing::Size(240, 140);
     this->Controls->Add(this->rbIndividual);
     this->Controls->Add(this->rbFamiliar);
     this->Controls->Add(this->btnAceptar);
     this->Text = L"Membresía";
     this->ResumeLayout(false);
     this->PerformLayout();

 }
 #pragma endregion

 private: System::Void btnAceptar_Click(System::Object^ sender, System::EventArgs^ e) {
 String^ tipo = this->rbIndividual->Checked ? "Individual" : "Familiar";
 MessageBox::Show("Membresía registrada: " + tipo, "Membresía", MessageBoxButtons::OK, MessageBoxIcon::Information);
 this->Close();
 }
 };
}
