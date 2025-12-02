#pragma once

namespace proyectoZoo {

 using namespace System;
 using namespace System::ComponentModel;
 using namespace System::Collections;
 using namespace System::Windows::Forms;
 using namespace System::Data;
 using namespace System::Drawing;

 public ref class Factura : public System::Windows::Forms::Form
 {
 public:
 Factura(void)
 {
 InitializeComponent();
 }

 protected:
 ~Factura()
 {
 if (components)
 delete components;
 }

 private: System::Windows::Forms::Button^ btnSave;
 private: System::Windows::Forms::Label^ lblTitulo;
 private: System::ComponentModel::IContainer^ components;

 #pragma region Windows Form Designer generated code
 void InitializeComponent(void)
 {
     this->components = (gcnew System::ComponentModel::Container());
     this->btnSave = (gcnew System::Windows::Forms::Button());
     this->lblTitulo = (gcnew System::Windows::Forms::Label());
     this->SuspendLayout();
     this->btnSave->Location = System::Drawing::Point(100, 70);
     this->btnSave->Name = L"btnSave";
     this->btnSave->Size = System::Drawing::Size(120, 30);
     this->btnSave->TabIndex = 0;
     this->btnSave->Text = L"Guardar Factura";
     this->btnSave->UseVisualStyleBackColor = true;
     this->btnSave->Click += gcnew System::EventHandler(this, &Factura::btnSave_Click);
     this->lblTitulo->AutoSize = true;
     this->lblTitulo->Location = System::Drawing::Point(20, 20);
     this->lblTitulo->Name = L"lblTitulo";
     this->lblTitulo->Size = System::Drawing::Size(100, 23);
     this->lblTitulo->Text = L"Factura simple";
     this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
     this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
     this->ClientSize = System::Drawing::Size(320, 130);
     this->Controls->Add(this->lblTitulo);
     this->Controls->Add(this->btnSave);
     this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
     this->MaximizeBox = false;
     this->MinimizeBox = false;
     this->Name = L"Factura";
     this->Text = L"Factura";
     this->ResumeLayout(false);
     this->PerformLayout();

 }
 #pragma endregion

 private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
 SaveFileDialog^ sfd = gcnew SaveFileDialog();
 sfd->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
 sfd->FileName = "factura.txt";
 if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
 String^ content = "Factura\r\n";
 content += "Fecha: " + DateTime::Now.ToString() + "\r\n";
 content += "Total: $0.00\r\n";
 System::IO::File::WriteAllText(sfd->FileName, content);
 MessageBox::Show("Factura guardada en:\n" + sfd->FileName, "Factura", MessageBoxButtons::OK, MessageBoxIcon::Information);
 }
 }
 };
}
