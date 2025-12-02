#pragma once

#include "Factura.h"
#include "SalesCounter.h"
#include "Boleto.h"

namespace proyectoZoo {

 using namespace System;
 using namespace System::ComponentModel;
 using namespace System::Collections;
 using namespace System::Windows::Forms;
 using namespace System::Data;
 using namespace System::Drawing;

 public ref class VentaBoleto : public System::Windows::Forms::Form
 {
 public:
 VentaBoleto(void)
 {
 InitializeComponent();
 }

 protected:
 ~VentaBoleto()
 {
 if (components)
 delete components;
 }

 private: System::Windows::Forms::Label^ lblCajera;
 private: System::Windows::Forms::Label^ lblCedula;
 private: System::Windows::Forms::TextBox^ txtCedula;
 private: System::Windows::Forms::Label^ lblCorreo;
 private: System::Windows::Forms::TextBox^ txtCorreo;
 private: System::Windows::Forms::GroupBox^ gbTipo;
 private: System::Windows::Forms::RadioButton^ rbNinio;
 private: System::Windows::Forms::RadioButton^ rbAdulto;
 private: System::Windows::Forms::RadioButton^ rbAdultoMayor;
 private: System::Windows::Forms::Label^ lblCantidad;
 private: System::Windows::Forms::ComboBox^ cbCantidad;
 private: System::Windows::Forms::Button^ btnAgregar;
 private: System::Windows::Forms::ListView^ lvCart;
 private: System::Windows::Forms::ColumnHeader^ chTipo;
 private: System::Windows::Forms::ColumnHeader^ chCantidad;
 private: System::Windows::Forms::ColumnHeader^ chPrecio;
 private: System::Windows::Forms::ColumnHeader^ chTotal;
 private: System::Windows::Forms::Label^ lblCartTotal;
 private: System::Windows::Forms::Button^ btnVender;
 private: System::ComponentModel::IContainer^ components;
 private: String^ correoPlaceholder;

 #pragma region Windows Form Designer generated code
 void InitializeComponent(void)
 {
 this->components = (gcnew System::ComponentModel::Container());
 this->lblCajera = (gcnew System::Windows::Forms::Label());
 this->lblCedula = (gcnew System::Windows::Forms::Label());
 this->txtCedula = (gcnew System::Windows::Forms::TextBox());
 this->lblCorreo = (gcnew System::Windows::Forms::Label());
 this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
 this->gbTipo = (gcnew System::Windows::Forms::GroupBox());
 this->rbNinio = (gcnew System::Windows::Forms::RadioButton());
 this->rbAdulto = (gcnew System::Windows::Forms::RadioButton());
 this->rbAdultoMayor = (gcnew System::Windows::Forms::RadioButton());
 this->lblCantidad = (gcnew System::Windows::Forms::Label());
 this->cbCantidad = (gcnew System::Windows::Forms::ComboBox());
 this->btnAgregar = (gcnew System::Windows::Forms::Button());
 this->lvCart = (gcnew System::Windows::Forms::ListView());
 this->chTipo = (gcnew System::Windows::Forms::ColumnHeader());
 this->chCantidad = (gcnew System::Windows::Forms::ColumnHeader());
 this->chPrecio = (gcnew System::Windows::Forms::ColumnHeader());
 this->chTotal = (gcnew System::Windows::Forms::ColumnHeader());
 this->lblCartTotal = (gcnew System::Windows::Forms::Label());
 this->btnVender = (gcnew System::Windows::Forms::Button());
 this->gbTipo->SuspendLayout();
 this->SuspendLayout();
 // 
 // lblCajera
 // 
 this->lblCajera->AutoSize = true;
 this->lblCajera->Location = System::Drawing::Point(12,9);
 this->lblCajera->Name = L"lblCajera";
 this->lblCajera->Size = System::Drawing::Size(57,13);
 this->lblCajera->TabIndex =0;
 this->lblCajera->Text = L"Cajera1";
 // 
 // lblCedula
 // 
 this->lblCedula->AutoSize = true;
 this->lblCedula->Location = System::Drawing::Point(12,35);
 this->lblCedula->Name = L"lblCedula";
 this->lblCedula->Size = System::Drawing::Size(40,13);
 this->lblCedula->TabIndex =1;
 this->lblCedula->Text = L"Cédula";
 // 
 // txtCedula
 // 
 this->txtCedula->Location = System::Drawing::Point(15,51);
 this->txtCedula->Name = L"txtCedula";
 this->txtCedula->Size = System::Drawing::Size(200,20);
 this->txtCedula->TabIndex =2;
 this->txtCedula->MaxLength =10; // limitar a10 caracteres
 this->txtCedula->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &VentaBoleto::txtCedula_KeyPress);
 this->txtCedula->TextChanged += gcnew System::EventHandler(this, &VentaBoleto::txtCedula_TextChanged);
 // 
 // lblCorreo
 // 
 this->lblCorreo->AutoSize = true;
 this->lblCorreo->Location = System::Drawing::Point(12,80);
 this->lblCorreo->Name = L"lblCorreo";
 this->lblCorreo->Size = System::Drawing::Size(38,13);
 this->lblCorreo->TabIndex =3;
 this->lblCorreo->Text = L"Correo";
 // 
 // txtCorreo
 // 
 this->txtCorreo->Location = System::Drawing::Point(15,96);
 this->txtCorreo->Name = L"txtCorreo";
 this->txtCorreo->Size = System::Drawing::Size(200,20);
 this->txtCorreo->TabIndex =4;
 // placeholder setup
 this->correoPlaceholder = "example@gmail.com";
 this->txtCorreo->Text = this->correoPlaceholder;
 this->txtCorreo->ForeColor = System::Drawing::Color::Gray;
 this->txtCorreo->Enter += gcnew System::EventHandler(this, &VentaBoleto::txtCorreo_Enter);
 this->txtCorreo->Leave += gcnew System::EventHandler(this, &VentaBoleto::txtCorreo_Leave);
 // 
 // gbTipo
 // 
 this->gbTipo->Controls->Add(this->rbAdultoMayor);
 this->gbTipo->Controls->Add(this->rbAdulto);
 this->gbTipo->Controls->Add(this->rbNinio);
 this->gbTipo->Location = System::Drawing::Point(15,125);
 this->gbTipo->Name = L"gbTipo";
 this->gbTipo->Size = System::Drawing::Size(200,100);
 this->gbTipo->TabIndex =5;
 this->gbTipo->TabStop = false;
 this->gbTipo->Text = L"Tipo de Boleto";
 // 
 // rbNinio
 // 
 this->rbNinio->AutoSize = true;
 this->rbNinio->Location = System::Drawing::Point(6,19);
 this->rbNinio->Name = L"rbNinio";
 this->rbNinio->Size = System::Drawing::Size(47,17);
 this->rbNinio->TabIndex =0;
 this->rbNinio->TabStop = true;
 this->rbNinio->Text = L"Niño";
 this->rbNinio->UseVisualStyleBackColor = true;
 // 
 // rbAdulto
 // 
 this->rbAdulto->AutoSize = true;
 this->rbAdulto->Location = System::Drawing::Point(6,42);
 this->rbAdulto->Name = L"rbAdulto";
 this->rbAdulto->Size = System::Drawing::Size(57,17);
 this->rbAdulto->TabIndex =1;
 this->rbAdulto->TabStop = true;
 this->rbAdulto->Text = L"Adulto";
 this->rbAdulto->UseVisualStyleBackColor = true;
 // 
 // rbAdultoMayor
 // 
 this->rbAdultoMayor->AutoSize = true;
 this->rbAdultoMayor->Location = System::Drawing::Point(6,65);
 this->rbAdultoMayor->Name = L"rbAdultoMayor";
 this->rbAdultoMayor->Size = System::Drawing::Size(95,17);
 this->rbAdultoMayor->TabIndex =2;
 this->rbAdultoMayor->TabStop = true;
 this->rbAdultoMayor->Text = L"Adulto Mayor";
 this->rbAdultoMayor->UseVisualStyleBackColor = true;
 // 
 // lblCantidad
 // 
 this->lblCantidad->AutoSize = true;
 this->lblCantidad->Location = System::Drawing::Point(12,235);
 this->lblCantidad->Name = L"lblCantidad";
 this->lblCantidad->Size = System::Drawing::Size(102,13);
 this->lblCantidad->TabIndex =6;
 this->lblCantidad->Text = L"Cantidad de boletos";
 // 
 // cbCantidad
 // 
 this->cbCantidad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
 this->cbCantidad->FormattingEnabled = true;
 this->cbCantidad->Location = System::Drawing::Point(15,251);
 this->cbCantidad->Name = L"cbCantidad";
 this->cbCantidad->Size = System::Drawing::Size(60,21);
 this->cbCantidad->TabIndex =7;
 // agregar items según Boleto::GetAllowedQuantities()
 cli::array<int>^ allowed = proyectoZoo::Boleto::GetAllowedQuantities();
 for (int i =0; i < allowed->Length; i++) this->cbCantidad->Items->Add(allowed[i].ToString());
 // seleccionar valor por defecto
 int def = proyectoZoo::Boleto::DefaultQuantity();
 for (int i =0; i < this->cbCantidad->Items->Count; i++) {
 if (this->cbCantidad->Items[i]->ToString()->Equals(def.ToString())) { this->cbCantidad->SelectedIndex = i; break; }
 }
 // 
 // btnAgregar
 // 
 this->btnAgregar->Location = System::Drawing::Point(90,248);
 this->btnAgregar->Name = L"btnAgregar";
 this->btnAgregar->Size = System::Drawing::Size(125,23);
 this->btnAgregar->TabIndex =9;
 this->btnAgregar->Text = L"Agregar al carrito";
 this->btnAgregar->UseVisualStyleBackColor = true;
 this->btnAgregar->Click += gcnew System::EventHandler(this, &VentaBoleto::btnAgregar_Click);
 // 
 // lvCart
 // 
 this->lvCart->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^ >(4) { this->chTipo, this->chCantidad, this->chPrecio, this->chTotal });
 this->lvCart->FullRowSelect = true;
 this->lvCart->GridLines = true;
 this->lvCart->HideSelection = false;
 this->lvCart->Location = System::Drawing::Point(230,40);
 this->lvCart->Name = L"lvCart";
 this->lvCart->Size = System::Drawing::Size(420,220);
 this->lvCart->TabIndex =10;
 this->lvCart->UseCompatibleStateImageBehavior = false;
 this->lvCart->View = System::Windows::Forms::View::Details;
 this->chTipo->Text = L"Tipo"; this->chTipo->Width =140;
 this->chCantidad->Text = L"Cantidad"; this->chCantidad->Width =80;
 this->chPrecio->Text = L"Precio Unit."; this->chPrecio->Width =90;
 this->chTotal->Text = L"Total"; this->chTotal->Width =100;
 // 
 // lblCartTotal
 // 
 this->lblCartTotal->AutoSize = true;
 this->lblCartTotal->Location = System::Drawing::Point(230,270);
 this->lblCartTotal->Name = L"lblCartTotal";
 this->lblCartTotal->Size = System::Drawing::Size(70,13);
 this->lblCartTotal->TabIndex =11;
 this->lblCartTotal->Text = L"Total: $0.00";
 // 
 // btnVender
 // 
 this->btnVender->Location = System::Drawing::Point(15,290);
 this->btnVender->Name = L"btnVender";
 this->btnVender->Size = System::Drawing::Size(120,30);
 this->btnVender->TabIndex =8;
 this->btnVender->Text = L"Vender";
 this->btnVender->UseVisualStyleBackColor = true;
 this->btnVender->Click += gcnew System::EventHandler(this, &VentaBoleto::btnVender_Click);
 // 
 // VentaBoleto
 // 
 this->AutoScaleDimensions = System::Drawing::SizeF(6,13);
 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
 this->ClientSize = System::Drawing::Size(670,340);
 this->Controls->Add(this->lblCartTotal);
 this->Controls->Add(this->lvCart);
 this->Controls->Add(this->btnAgregar);
 this->Controls->Add(this->btnVender);
 this->Controls->Add(this->cbCantidad);
 this->Controls->Add(this->lblCantidad);
 this->Controls->Add(this->gbTipo);
 this->Controls->Add(this->txtCorreo);
 this->Controls->Add(this->lblCorreo);
 this->Controls->Add(this->txtCedula);
 this->Controls->Add(this->lblCedula);
 this->Controls->Add(this->lblCajera);
 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
 this->MaximizeBox = false;
 this->MinimizeBox = false;
 this->Name = L"VentaBoleto";
 this->Text = L"Boletos";
 this->gbTipo->ResumeLayout(false);
 this->gbTipo->PerformLayout();
 this->ResumeLayout(false);
 this->PerformLayout();
 }
 #pragma endregion

 private: System::Void btnVender_Click(System::Object^ sender, System::EventArgs^ e) {
	// Validaciones
	if (String::IsNullOrWhiteSpace(this->txtCedula->Text)) {
		MessageBox::Show("Ingrese la cédula del cliente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (String::IsNullOrWhiteSpace(this->txtCorreo->Text) || this->txtCorreo->Text->Equals(this->correoPlaceholder)) {
		MessageBox::Show("Ingrese el correo del cliente.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (this->lvCart->Items->Count ==0) {
		MessageBox::Show("El carrito está vacío. Agregue boletos antes de vender.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Procesar todas las líneas del carrito
	double grandTotal =0.0;
	for each (ListViewItem^ it in this->lvCart->Items) {
		String^ tipoLinea = it->SubItems[0]->Text;
		int cant = Convert::ToInt32(it->SubItems[1]->Text);
		double price = Double::Parse(it->SubItems[2]->Text);
		grandTotal += price * cant;
		// Actualizar contadores
		if (tipoLinea->Equals("Niño")) proyectoZoo::SalesCounter::AddNinio(cant);
		else if (tipoLinea->Equals("Adulto")) proyectoZoo::SalesCounter::AddAdulto(cant);
		else if (tipoLinea->Equals("Adulto Mayor")) proyectoZoo::SalesCounter::AddAdultoMayor(cant);
	}

	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	sfd->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
	sfd->FileName = "factura_boleto.txt";
	if (sfd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ content = "Factura de Boletos\r\n";
		content += "Cajera: Cajera1\r\n";
		content += "Cédula: " + this->txtCedula->Text + "\r\n";
		content += "Correo: " + this->txtCorreo->Text + "\r\n\r\n";
		content += "Detalle:\r\n";
		for each (ListViewItem^ it in this->lvCart->Items) {
			content += String::Format("{0} - Cant:{1} - P.Unit:${2} - Total:${3}\r\n", it->SubItems[0]->Text, it->SubItems[1]->Text, it->SubItems[2]->Text, it->SubItems[3]->Text);
		}
		content += "\r\nTotal Factura: $" + grandTotal.ToString("F2") + "\r\n";
		content += "Fecha: " + DateTime::Now.ToString() + "\r\n";
		System::IO::File::WriteAllText(sfd->FileName, content);
		MessageBox::Show("Factura generada y guardada en:\n" + sfd->FileName, "Factura", MessageBoxButtons::OK, MessageBoxIcon::Information);
		// Limpiar carrito
		this->lvCart->Items->Clear();
		UpdateCartTotal();
		// Opcional: abrir formulario Factura
		proyectoZoo::Factura^ f = gcnew proyectoZoo::Factura();
		f->ShowDialog();
	}
 }

 private: System::Void txtCedula_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	// Permitir solo dígitos y teclas de control (backspace, etc.)
	if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) {
		e->Handled = true;
	}
 }

 private: System::Void txtCedula_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// Eliminar cualquier carácter no numérico que pudiera pegarse
	String^ s = this->txtCedula->Text;
	System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
	for each (wchar_t c in s->ToCharArray()) {
		if (Char::IsDigit(c)) sb->Append(c);
	}
	String^ filtered = sb->ToString();
	if (!filtered->Equals(s)) {
		int sel = this->txtCedula->SelectionStart;
		this->txtCedula->Text = filtered;
		// restablecer posición de cursor
		this->txtCedula->SelectionStart = Math::Min(sel, filtered->Length);
	}
 }

 // Handlers for placeholder behavior
 private: System::Void txtCorreo_Enter(System::Object^ sender, System::EventArgs^ e) {
 if (this->txtCorreo->Text->Equals(this->correoPlaceholder)) {
 this->txtCorreo->Text = String::Empty;
 this->txtCorreo->ForeColor = System::Drawing::Color::Black;
 }
 }

 private: System::Void txtCorreo_Leave(System::Object^ sender, System::EventArgs^ e) {
 if (String::IsNullOrWhiteSpace(this->txtCorreo->Text)) {
 this->txtCorreo->Text = this->correoPlaceholder;
 this->txtCorreo->ForeColor = System::Drawing::Color::Gray;
 }
 }

 private: System::Void btnAgregar_Click(System::Object^ sender, System::EventArgs^ e) {
 // Validar tipo
 String^ tipo;
 double precio =0.0;
 if (this->rbNinio->Checked) { tipo = "Niño"; precio =5.0; }
 else if (this->rbAdulto->Checked) { tipo = "Adulto"; precio =10.0; }
 else if (this->rbAdultoMayor->Checked) { tipo = "Adulto Mayor"; precio =7.5; }
 else { MessageBox::Show("Seleccione el tipo de boleto.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

 // Obtener cantidad
 if (this->cbCantidad->SelectedItem == nullptr) { MessageBox::Show("Seleccione cantidad.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
 int cantidad = Convert::ToInt32(this->cbCantidad->SelectedItem->ToString());
 if (cantidad <=0) { MessageBox::Show("Cantidad inválida.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

 double lineTotal = precio * cantidad;
 array<String^>^ row = gcnew array<String^>(4){ tipo, cantidad.ToString(), precio.ToString("F2"), lineTotal.ToString("F2") };
 ListViewItem^ lvi = gcnew ListViewItem(row);
 this->lvCart->Items->Add(lvi);

 // Actualizar total del carrito
 UpdateCartTotal();
 }

 private: System::Void UpdateCartTotal() {
 double sum =0.0;
 for each (ListViewItem^ it in this->lvCart->Items) {
 double val = Double::Parse(it->SubItems[3]->Text);
 sum += val;
 }
 this->lblCartTotal->Text = String::Format("Total: ${0}", sum.ToString("F2"));
 }
 };

 }
