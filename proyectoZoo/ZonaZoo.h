#pragma once

namespace proyectoZoo {

 using namespace System;
 using namespace System::ComponentModel;
 using namespace System::Collections;
 using namespace System::Windows::Forms;
 using namespace System::Data;
 using namespace System::Drawing;

 public ref class ZonaZoo : public System::Windows::Forms::Form
 {
 public:
 ZonaZoo(void)
 {
 InitializeComponent();
 }

 protected:
 ~ZonaZoo()
 {
 if (components)
 delete components;
 }

 private: System::Windows::Forms::ListBox^ lbZonas;
 private: System::Windows::Forms::Button^ btnInfo;
 private: System::ComponentModel::IContainer^ components;

 #pragma region Windows Form Designer generated code
 void InitializeComponent(void)
 {
     this->components = (gcnew System::ComponentModel::Container());
     this->lbZonas = (gcnew System::Windows::Forms::ListBox());
     this->btnInfo = (gcnew System::Windows::Forms::Button());
     this->SuspendLayout();
     this->lbZonas->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Zona Nocturna", L"Zona Reptiles" });
     this->lbZonas->Location = System::Drawing::Point(20, 20);
     this->lbZonas->Size = System::Drawing::Size(160, 60);
     this->btnInfo->Location = System::Drawing::Point(200, 20);
     this->btnInfo->Text = L"Info";
     this->btnInfo->Click += gcnew System::EventHandler(this, &ZonaZoo::btnInfo_Click);
     this->ClientSize = System::Drawing::Size(320, 120);
     this->Controls->Add(this->lbZonas);
     this->Controls->Add(this->btnInfo);
     this->Text = L"ZonaZoo";
     this->ResumeLayout(false);
     this->PerformLayout();

 }
 #pragma endregion

 private: System::Void btnInfo_Click(System::Object^ sender, System::EventArgs^ e) {
 if (this->lbZonas->SelectedIndex >=0) {
 String^ sel = this->lbZonas->SelectedItem->ToString();
 MessageBox::Show("Información de: " + sel, "ZonaZoo", MessageBoxButtons::OK, MessageBoxIcon::Information);
 }
 else {
 MessageBox::Show("Seleccione una zona.", "ZonaZoo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
 }
 }
 };
}
