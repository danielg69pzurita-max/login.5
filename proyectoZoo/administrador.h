#pragma once

#include <regex>
#include "usuario.h"

namespace proyectoZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Resumen de administrador
	/// </summary>
	public ref class administrador : public System::Windows::Forms::Form
	{
	public:
		administrador(void)
		{
			InitializeComponent();
			InitializeDataStore();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~administrador()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::DataGridView^ dgvCajeros;
		System::Windows::Forms::GroupBox^ gbFormulario;
		System::Windows::Forms::Label^ lblCedula;
		System::Windows::Forms::TextBox^ txtCedula;
		System::Windows::Forms::Label^ lblNombre;
		System::Windows::Forms::TextBox^ txtNombre;
		System::Windows::Forms::Label^ lblEdad;
		System::Windows::Forms::TextBox^ txtEdad;
		System::Windows::Forms::Label^ lblCorreo;
		System::Windows::Forms::TextBox^ txtCorreo;
		System::Windows::Forms::Label^ lblUsuario;
		System::Windows::Forms::TextBox^ txtUsuario;
		System::Windows::Forms::Label^ lblContrasena;
		System::Windows::Forms::TextBox^ txtContrasena;

		System::Windows::Forms::Button^ btnCrear;

		System::Windows::Forms::Button^ btnEditar;
		System::Windows::Forms::Button^ btnEliminar;
		System::Windows::Forms::Button^ btnOrdenar;
		System::Windows::Forms::TextBox^ txtBuscar;
		System::Windows::Forms::Button^ btnBuscar;

		System::Windows::Forms::Label^ lblCurrent;
		System::Windows::Forms::ComboBox^ cbRoles;
		System::Windows::Forms::Button^ btnSeleccionarRol;
		System::Windows::Forms::Button^ btnVolver;

		System::ComponentModel::Container ^components;

		DataTable^ dtCajeros;
		BindingSource^ bs;

		bool isEditing = false;
	private: System::Windows::Forms::Label^ label1;


		   int editingRowIndex = -1;

	#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->dgvCajeros = (gcnew System::Windows::Forms::DataGridView());
			this->gbFormulario = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblCedula = (gcnew System::Windows::Forms::Label());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->lblEdad = (gcnew System::Windows::Forms::Label());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->lblCorreo = (gcnew System::Windows::Forms::Label());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->lblUsuario = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->lblContrasena = (gcnew System::Windows::Forms::Label());
			this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
			this->btnCrear = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->cbRoles = (gcnew System::Windows::Forms::ComboBox());
			this->btnSeleccionarRol = (gcnew System::Windows::Forms::Button());
			this->btnVolver = (gcnew System::Windows::Forms::Button());
			this->txtBuscar = (gcnew System::Windows::Forms::TextBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->lblCurrent = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCajeros))->BeginInit();
			this->gbFormulario->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvCajeros
			// 
			this->dgvCajeros->AllowUserToAddRows = false;
			this->dgvCajeros->AllowUserToDeleteRows = false;
			this->dgvCajeros->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvCajeros->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCajeros->Location = System::Drawing::Point(12, 59);
			this->dgvCajeros->MultiSelect = false;
			this->dgvCajeros->Name = L"dgvCajeros";
			this->dgvCajeros->ReadOnly = true;
			this->dgvCajeros->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvCajeros->Size = System::Drawing::Size(560, 253);
			this->dgvCajeros->TabIndex = 0;
			this->dgvCajeros->SelectionChanged += gcnew System::EventHandler(this, &administrador::dgvCajeros_SelectionChanged);
			// 
			// gbFormulario
			// 
			this->gbFormulario->Controls->Add(this->label1);
			this->gbFormulario->Controls->Add(this->lblCedula);
			this->gbFormulario->Controls->Add(this->txtCedula);
			this->gbFormulario->Controls->Add(this->lblNombre);
			this->gbFormulario->Controls->Add(this->txtNombre);
			this->gbFormulario->Controls->Add(this->lblEdad);
			this->gbFormulario->Controls->Add(this->txtEdad);
			this->gbFormulario->Controls->Add(this->lblCorreo);
			this->gbFormulario->Controls->Add(this->txtCorreo);
			this->gbFormulario->Controls->Add(this->lblUsuario);
			this->gbFormulario->Controls->Add(this->txtUsuario);
			this->gbFormulario->Controls->Add(this->lblContrasena);
			this->gbFormulario->Controls->Add(this->txtContrasena);
			this->gbFormulario->Controls->Add(this->btnCrear);
			this->gbFormulario->Controls->Add(this->btnEditar);
			this->gbFormulario->Controls->Add(this->btnEliminar);
			this->gbFormulario->Controls->Add(this->cbRoles);
			this->gbFormulario->Controls->Add(this->btnSeleccionarRol);
			this->gbFormulario->Controls->Add(this->btnVolver);
			this->gbFormulario->Location = System::Drawing::Point(580, 12);
			this->gbFormulario->Name = L"gbFormulario";
			this->gbFormulario->Size = System::Drawing::Size(300, 300);
			this->gbFormulario->TabIndex = 1;
			this->gbFormulario->TabStop = false;
			this->gbFormulario->Text = L"Gestión de Cajeros";
			this->gbFormulario->Enter += gcnew System::EventHandler(this, &administrador::gbFormulario_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 251);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 23;
			this->label1->Text = L"Seleccionar Rol";
			this->label1->Click += gcnew System::EventHandler(this, &administrador::label1_Click);
			// 
			// lblCedula
			// 
			this->lblCedula->AutoSize = true;
			this->lblCedula->Location = System::Drawing::Point(10, 16);
			this->lblCedula->Name = L"lblCedula";
			this->lblCedula->Size = System::Drawing::Size(40, 13);
			this->lblCedula->TabIndex = 0;
			this->lblCedula->Text = L"Cédula";
			// 
			// txtCedula
			// 
			this->txtCedula->Location = System::Drawing::Point(13, 32);
			this->txtCedula->MaxLength = 20;
			this->txtCedula->Name = L"txtCedula";
			this->txtCedula->Size = System::Drawing::Size(180, 20);
			this->txtCedula->TabIndex = 1;
			this->txtCedula->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &administrador::txtCedula_KeyPress);
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(10, 55);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(44, 13);
			this->lblNombre->TabIndex = 2;
			this->lblNombre->Text = L"Nombre";
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(13, 72);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(180, 20);
			this->txtNombre->TabIndex = 3;
			// 
			// lblEdad
			// 
			this->lblEdad->AutoSize = true;
			this->lblEdad->Location = System::Drawing::Point(10, 95);
			this->lblEdad->Name = L"lblEdad";
			this->lblEdad->Size = System::Drawing::Size(32, 13);
			this->lblEdad->TabIndex = 4;
			this->lblEdad->Text = L"Edad";
			this->lblEdad->Click += gcnew System::EventHandler(this, &administrador::lblEdad_Click);
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(13, 111);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(60, 20);
			this->txtEdad->TabIndex = 5;
			this->txtEdad->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &administrador::txtEdad_KeyPress);
			// 
			// lblCorreo
			// 
			this->lblCorreo->AutoSize = true;
			this->lblCorreo->Location = System::Drawing::Point(10, 134);
			this->lblCorreo->Name = L"lblCorreo";
			this->lblCorreo->Size = System::Drawing::Size(38, 13);
			this->lblCorreo->TabIndex = 6;
			this->lblCorreo->Text = L"Correo";
			// 
			// txtCorreo
			// 
			this->txtCorreo->ForeColor = System::Drawing::Color::Gray;
			this->txtCorreo->Location = System::Drawing::Point(14, 150);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(180, 20);
			this->txtCorreo->TabIndex = 7;
			this->txtCorreo->Text = L"ejemplo@correo.com";
			this->txtCorreo->TextChanged += gcnew System::EventHandler(this, &administrador::txtCorreo_TextChanged);
			this->txtCorreo->Enter += gcnew System::EventHandler(this, &administrador::txtCorreo_Enter);
			this->txtCorreo->Leave += gcnew System::EventHandler(this, &administrador::txtCorreo_Leave);
			// 
			// lblUsuario
			// 
			this->lblUsuario->AutoSize = true;
			this->lblUsuario->Location = System::Drawing::Point(10, 173);
			this->lblUsuario->Name = L"lblUsuario";
			this->lblUsuario->Size = System::Drawing::Size(43, 13);
			this->lblUsuario->TabIndex = 8;
			this->lblUsuario->Text = L"Usuario";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(13, 189);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(120, 20);
			this->txtUsuario->TabIndex = 9;
			// 
			// lblContrasena
			// 
			this->lblContrasena->AutoSize = true;
			this->lblContrasena->Location = System::Drawing::Point(10, 212);
			this->lblContrasena->Name = L"lblContrasena";
			this->lblContrasena->Size = System::Drawing::Size(61, 13);
			this->lblContrasena->TabIndex = 10;
			this->lblContrasena->Text = L"Contraseña";
			// 
			// txtContrasena
			// 
			this->txtContrasena->Location = System::Drawing::Point(14, 228);
			this->txtContrasena->Name = L"txtContrasena";
			this->txtContrasena->Size = System::Drawing::Size(120, 20);
			this->txtContrasena->TabIndex = 11;
			this->txtContrasena->UseSystemPasswordChar = true;
			// 
			// btnCrear
			// 
			this->btnCrear->Location = System::Drawing::Point(200, 36);
			this->btnCrear->Name = L"btnCrear";
			this->btnCrear->Size = System::Drawing::Size(90, 25);
			this->btnCrear->TabIndex = 12;
			this->btnCrear->Text = L"Crear";
			this->btnCrear->UseVisualStyleBackColor = true;
			this->btnCrear->Click += gcnew System::EventHandler(this, &administrador::btnCrear_Click);
			// 
			// btnEditar
			// 
			this->btnEditar->Location = System::Drawing::Point(200, 67);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(90, 25);
			this->btnEditar->TabIndex = 14;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = true;
			this->btnEditar->Click += gcnew System::EventHandler(this, &administrador::btnEditar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(200, 100);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(90, 25);
			this->btnEliminar->TabIndex = 15;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &administrador::btnEliminar_Click);
			// 
			// cbRoles
			// 
			this->cbRoles->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbRoles->FormattingEnabled = true;
			this->cbRoles->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Cajero", L"Veterinario", L"Cuidador", L"Empleado" });
			this->cbRoles->Location = System::Drawing::Point(14, 273);
			this->cbRoles->Name = L"cbRoles";
			this->cbRoles->Size = System::Drawing::Size(180, 21);
			this->cbRoles->TabIndex = 20;
			// 
			// btnSeleccionarRol
			// 
			this->btnSeleccionarRol->Location = System::Drawing::Point(200, 273);
			this->btnSeleccionarRol->Name = L"btnSeleccionarRol";
			this->btnSeleccionarRol->Size = System::Drawing::Size(90, 25);
			this->btnSeleccionarRol->TabIndex = 21;
			this->btnSeleccionarRol->Text = L"Asignar Rol";
			this->btnSeleccionarRol->UseVisualStyleBackColor = true;
			this->btnSeleccionarRol->Click += gcnew System::EventHandler(this, &administrador::btnSeleccionarRol_Click);
			// 
			// btnVolver
			// 
			this->btnVolver->Location = System::Drawing::Point(200, 134);
			this->btnVolver->Name = L"btnVolver";
			this->btnVolver->Size = System::Drawing::Size(90, 25);
			this->btnVolver->TabIndex = 22;
			this->btnVolver->Text = L"Volver";
			this->btnVolver->UseVisualStyleBackColor = true;
			this->btnVolver->Click += gcnew System::EventHandler(this, &administrador::btnVolver_Click);
			// 
			// txtBuscar
			// 
			this->txtBuscar->Location = System::Drawing::Point(177, 33);
			this->txtBuscar->Name = L"txtBuscar";
			this->txtBuscar->Size = System::Drawing::Size(140, 20);
			this->txtBuscar->TabIndex = 17;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(111, 30);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(60, 23);
			this->btnBuscar->TabIndex = 18;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &administrador::btnBuscar_Click);
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->Location = System::Drawing::Point(15, 28);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(90, 25);
			this->btnOrdenar->TabIndex = 16;
			this->btnOrdenar->Text = L"Ordenar A-Z";
			this->btnOrdenar->UseVisualStyleBackColor = true;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &administrador::btnOrdenar_Click);
			// 
			// lblCurrent
			// 
			this->lblCurrent->AutoSize = true;
			this->lblCurrent->Location = System::Drawing::Point(12, 9);
			this->lblCurrent->Name = L"lblCurrent";
			this->lblCurrent->Size = System::Drawing::Size(125, 13);
			this->lblCurrent->TabIndex = 19;
			this->lblCurrent->Text = L"Usuario activo: (ninguno)";
			// 
			// administrador
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 330);
			this->Controls->Add(this->gbFormulario);
			this->Controls->Add(this->dgvCajeros);
			this->Controls->Add(this->btnOrdenar);
			this->Controls->Add(this->lblCurrent);
			this->Controls->Add(this->btnBuscar);
			this->Controls->Add(this->txtBuscar);
			this->Name = L"administrador";
			this->Text = L"Administración - Cajeros";
			this->Load += gcnew System::EventHandler(this, &administrador::administrador_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvCajeros))->EndInit();
			this->gbFormulario->ResumeLayout(false);
			this->gbFormulario->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion

		void InitializeDataStore() {
			dtCajeros = gcnew DataTable();
			dtCajeros->Columns->Add("Cedula", String::typeid);
			dtCajeros->Columns->Add("Nombre", String::typeid);
			dtCajeros->Columns->Add("Edad", Int32::typeid);
			dtCajeros->Columns->Add("Correo", String::typeid);
			dtCajeros->Columns->Add("Usuario", String::typeid);
			dtCajeros->Columns->Add("Cargo", String::typeid); // agregar columna Cargo
			dtCajeros->Columns->Add("Contrasena", String::typeid);

			bs = gcnew BindingSource();
			bs->DataSource = dtCajeros;
			this->dgvCajeros->DataSource = bs;
		}

		bool ValidateEmail(String^ email) {
			if (String::IsNullOrWhiteSpace(email)) return false;
			Regex^ r = gcnew Regex("^[\\w\\.-]+@[\\w\\.-]+\\.[a-zA-Z]{2,}$");
			return r->IsMatch(email);
		}

		void ClearForm() {
			this->txtCedula->Text = String::Empty;
			this->txtNombre->Text = String::Empty;
			this->txtEdad->Text = String::Empty;
			this->txtCorreo->Text = "ejemplo@correo.com";
			this->txtCorreo->ForeColor = System::Drawing::Color::Gray;
			this->txtUsuario->Text = String::Empty;
			this->txtContrasena->Text = String::Empty;
			isEditing = false; editingRowIndex = -1;
		}

	private: System::Void txtCedula_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// allow digits and control and '-'
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '-') {
			e->Handled = true;
		}
	}

	private: System::Void txtEdad_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar)) {
			e->Handled = true;
		}
	}

	private: System::Void txtCorreo_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (this->txtCorreo->Text->Equals("ejemplo@correo.com")) {
			this->txtCorreo->Text = String::Empty;
			this->txtCorreo->ForeColor = System::Drawing::Color::Black;
		}
	}

	private: System::Void txtCorreo_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(this->txtCorreo->Text)) {
			this->txtCorreo->Text = "ejemplo@correo.com";
			this->txtCorreo->ForeColor = System::Drawing::Color::Gray;
		}
	}

	private: System::Void btnCrear_Click(System::Object^ sender, System::EventArgs^ e) {
		// Validar campos
		if (String::IsNullOrWhiteSpace(txtCedula->Text) || String::IsNullOrWhiteSpace(txtNombre->Text) || String::IsNullOrWhiteSpace(txtEdad->Text) || String::IsNullOrWhiteSpace(txtUsuario->Text) || String::IsNullOrWhiteSpace(txtContrasena->Text)) {
			MessageBox::Show("Complete todos los campos obligatorios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		int edad;
		try { edad = Convert::ToInt32(txtEdad->Text); }
		catch (...) { MessageBox::Show("Edad inválida.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
		if (edad <=0) { MessageBox::Show("Edad debe ser mayor que0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
		if (!txtCorreo->Text->Equals("ejemplo@correo.com") && !ValidateEmail(txtCorreo->Text)) { MessageBox::Show("Correo inválido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

		// Agregar
		DataRow^ r = dtCajeros->NewRow();
		r["Cedula"] = txtCedula->Text;
		r["Nombre"] = txtNombre->Text;
		r["Edad"] = edad;
		r["Correo"] = txtCorreo->Text->Equals("ejemplo@correo.com") ? String::Empty : txtCorreo->Text;
		r["Usuario"] = txtUsuario->Text;
		r["Contrasena"] = txtContrasena->Text;
		r["Cargo"] = String::Empty; // por defecto sin cargo
		dtCajeros->Rows->Add(r);
		ClearForm();
	}

	private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!isEditing || editingRowIndex <0) { MessageBox::Show("No hay edición en curso.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); return; }
		// Validar y guardar cambios
		if (String::IsNullOrWhiteSpace(txtCedula->Text) || String::IsNullOrWhiteSpace(txtNombre->Text) || String::IsNullOrWhiteSpace(txtEdad->Text) || String::IsNullOrWhiteSpace(txtUsuario->Text)) {
			MessageBox::Show("Complete los campos obligatorios.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return;
		}
		int edad;
		try { edad = Convert::ToInt32(txtEdad->Text); }
		catch (...) { MessageBox::Show("Edad inválida.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
		if (edad <=0) { MessageBox::Show("Edad debe ser mayor que0.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
		if (!txtCorreo->Text->Equals("ejemplo@correo.com") && !ValidateEmail(txtCorreo->Text)) { MessageBox::Show("Correo inválido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }

		DataRow^ r = dtCajeros->Rows[editingRowIndex];
		r["Cedula"] = txtCedula->Text;
		r["Nombre"] = txtNombre->Text;
		r["Edad"] = edad;
		r["Correo"] = txtCorreo->Text->Equals("ejemplo@correo.com") ? String::Empty : txtCorreo->Text;
		r["Usuario"] = txtUsuario->Text;
		r["Contrasena"] = txtContrasena->Text;

		ClearForm();
	}

	private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvCajeros->SelectedRows->Count ==0) { MessageBox::Show("Seleccione un cajero para editar.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); return; }
		DataRowView^ drv = (DataRowView^)bs->Current;
		if (drv == nullptr) return;
		DataRow^ r = drv->Row;
		// cargar campos
		txtCedula->Text = r["Cedula"]->ToString();
		txtNombre->Text = r["Nombre"]->ToString();
		txtEdad->Text = r["Edad"]->ToString();
		String^ correo = r["Correo"]->ToString();
		if (String::IsNullOrWhiteSpace(correo)) { txtCorreo->Text = "ejemplo@correo.com"; txtCorreo->ForeColor = System::Drawing::Color::Gray; }
		else { txtCorreo->Text = correo; txtCorreo->ForeColor = System::Drawing::Color::Black; }
		txtUsuario->Text = r["Usuario"]->ToString();
		txtContrasena->Text = r["Contrasena"]->ToString();

		// set editing index to the underlying datatable row index
		editingRowIndex = dtCajeros->Rows->IndexOf(r);
		isEditing = true;
	}

	private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvCajeros->SelectedRows->Count ==0) { MessageBox::Show("Seleccione un cajero para eliminar.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information); return; }
		DataRowView^ drv = (DataRowView^)bs->Current;
		if (drv == nullptr) return;
		DataRow^ r = drv->Row;
		dtCajeros->Rows->Remove(r);
		ClearForm();
	}

	private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
		bs->Sort = "Nombre ASC";
	}

	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ term = txtBuscar->Text->Trim();
		if (String::IsNullOrWhiteSpace(term)) { bs->RemoveFilter(); return; }
		String^ filter = String::Format("Nombre LIKE '%{0}%' OR Usuario LIKE '%{0}%'", term->Replace("'","''"));
		bs->Filter = filter;
	}

	private: System::Void dgvCajeros_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		// selection changed - keep current available for edit/delete
	}

	private: System::Void btnSeleccionarRol_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->cbRoles->SelectedItem == nullptr) { MessageBox::Show("Seleccione un rol.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
		String^ rol = this->cbRoles->SelectedItem->ToString();

		// If a row is selected, assign role to that row
		if (this->dgvCajeros->SelectedRows->Count >0) {
			DataRowView^ drv = (DataRowView^)bs->Current;
			if (drv != nullptr) {
				drv->Row["Cargo"] = rol;
				bs->ResetBindings(false);
				MessageBox::Show("Rol asignado al usuario seleccionado.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}
		}

		// No selection - add current login user with this role
		String^ u = proyectoZoo::usuario::CurrentUser == nullptr ? String::Empty : proyectoZoo::usuario::CurrentUser;
		if (String::IsNullOrWhiteSpace(u)) { MessageBox::Show("No hay usuario activo para asignar el rol.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning); return; }
		DataRow^ r = dtCajeros->NewRow();
		r["Usuario"] = u;
		r["Nombre"] = u;
		r["Cargo"] = rol;
		r["Cedula"] = String::Empty;
		r["Correo"] = String::Empty;
		r["Contrasena"] = String::Empty;
		dtCajeros->Rows->Add(r);
		bs->ResetBindings(false);
		MessageBox::Show("Usuario activo agregado al listado con rol.", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void btnVolver_Click(System::Object^ sender, System::EventArgs^ e) {
		// Close this dialog to return to the caller (menuAdmin)
		this->Close();
	}

	private: System::Void administrador_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ u = proyectoZoo::usuario::CurrentUser == nullptr ? "(ninguno)" : proyectoZoo::usuario::CurrentUser;
		String^ c = proyectoZoo::usuario::CurrentCargo == nullptr ? "(ninguno)" : proyectoZoo::usuario::CurrentCargo;
		this->lblCurrent->Text = String::Format("Usuario activo: {0} - Cargo: {1}", u, c);

		// Agregar automáticamente al DataGridView los datos del login (si hay usuario)
		if (!String::IsNullOrWhiteSpace(proyectoZoo::usuario::CurrentUser)) {
			DataRow^ r = dtCajeros->NewRow();
			r["Usuario"] = proyectoZoo::usuario::CurrentUser;
			r["Nombre"] = proyectoZoo::usuario::CurrentUser;
			r["Cargo"] = proyectoZoo::usuario::CurrentCargo == nullptr ? String::Empty : proyectoZoo::usuario::CurrentCargo;
			r["Cedula"] = String::Empty;
			r["Correo"] = String::Empty;
			r["Contrasena"] = String::Empty;
			dtCajeros->Rows->Add(r);
			bs->ResetBindings(false);
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gbFormulario_Enter(System::Object^ sender, System::EventArgs^ e) { 
}
private: System::Void lblEdad_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtCorreo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

} // namespace proyectoZoo
