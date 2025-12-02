#pragma once

#include "VerEmpleado.h"
#include "Factura.h"
#include "VentaBoleto.h"
#include "Membresia.h"
#include "ZonaZoo.h"
#include "SalesCounter.h"

namespace proyectoZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuDueño
	/// </summary>
	public ref class MenuDueño : public System::Windows::Forms::Form
	{
	public:
		MenuDueño(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MenuDueño()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private:


	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	internal:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;


	private: System::Windows::Forms::Label^ label1;




	

	private: System::Windows::Forms::ToolStripMenuItem^ boletoToolStripMenuItem;

	

	private: System::Windows::Forms::ToolStripMenuItem^ nombreToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ cerrarSesiónToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;



	

	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::ToolStripMenuItem^ verVentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip2;


	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;



		   // Administrador button



	

	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuDueño::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->verVentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boletoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nombreToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->cerrarSesiónToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->toolStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(187, 118);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(249, 102);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->ImageScalingSize = System::Drawing::Size(32, 32);
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->verVentasToolStripMenuItem,
					this->boletoToolStripMenuItem, this->cerrarSesiónToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(3, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(665, 38);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// verVentasToolStripMenuItem
			// 
			this->verVentasToolStripMenuItem->Name = L"verVentasToolStripMenuItem";
			this->verVentasToolStripMenuItem->Size = System::Drawing::Size(72, 36);
			this->verVentasToolStripMenuItem->Text = L"Ver Ventas";
			this->verVentasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuDueño::verVentasToolStripMenuItem_Click);
			// 
			// boletoToolStripMenuItem
			// 
			this->boletoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->nombreToolStripMenuItem });
			this->boletoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boletoToolStripMenuItem.Image")));
			this->boletoToolStripMenuItem->Name = L"boletoToolStripMenuItem";
			this->boletoToolStripMenuItem->Size = System::Drawing::Size(124, 36);
			this->boletoToolStripMenuItem->Text = L"Vender Boleto";
			this->boletoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuDueño::boletoToolStripMenuItem_Click);
			// 
			// nombreToolStripMenuItem
			// 
			this->nombreToolStripMenuItem->Name = L"nombreToolStripMenuItem";
			this->nombreToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nombreToolStripMenuItem->Text = L"Cantidad Boleto";
			this->nombreToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuDueño::nombreToolStripMenuItem_Click);
			// 
			// cerrarSesiónToolStripMenuItem
			// 
			this->cerrarSesiónToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrarSesiónToolStripMenuItem.Image")));
			this->cerrarSesiónToolStripMenuItem->Name = L"cerrarSesiónToolStripMenuItem";
			this->cerrarSesiónToolStripMenuItem->Size = System::Drawing::Size(120, 36);
			this->cerrarSesiónToolStripMenuItem->Text = L"Cerrar Sesión";
			this->cerrarSesiónToolStripMenuItem->Click += gcnew System::EventHandler(this, &MenuDueño::cerrarSesiónToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Location = System::Drawing::Point(228, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 31);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Zoo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(359, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(431, 319);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(168, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Jue Nov11202508:25:47";
			// 
			// toolStrip2
			// 
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripButton3 });
			this->toolStrip2->Location = System::Drawing::Point(0, 38);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(665, 25);
			this->toolStrip2->TabIndex = 15;
			this->toolStrip2->Text = L"toolStrip2";
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.BackgroundImage")));
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(23, 22);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MenuDueño::toolStripButton3_Click);
			// 
			// MenuDueño
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(665, 389);
			this->Controls->Add(this->toolStrip2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox2);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MenuDueño";
			this->Text = L"MenuCajera";
			this->Load += gcnew System::EventHandler(this, &MenuDueño::MenuDueño_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Abrir formulario VerEmpleado como diálogo
	proyectoZoo::VerEmpleado^ ver = gcnew proyectoZoo::VerEmpleado();
	ver->ShowDialog();
}

// Event handlers: single, consolidated implementations
private: System::Void verEmpleadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	proyectoZoo::VerEmpleado^ ver = gcnew proyectoZoo::VerEmpleado();
	ver->ShowDialog();
}

private: System::Void facturaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	proyectoZoo::Factura^ f = gcnew proyectoZoo::Factura();
	f->ShowDialog();
}

private: System::Void nombreToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	proyectoZoo::VentaBoleto^ vb = gcnew proyectoZoo::VentaBoleto();
	vb->ShowDialog();
}

private: System::Void membresiaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	proyectoZoo::Membresia^ m = gcnew proyectoZoo::Membresia();
	m->ShowDialog();
}

private: System::Void zonaZooToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	proyectoZoo::ZonaZoo^ z = gcnew proyectoZoo::ZonaZoo();
	z->ShowDialog();
}

private: System::Void especieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Abrir Zona Nocturna usando ZonaZoo
	proyectoZoo::ZonaZoo^ z = gcnew proyectoZoo::ZonaZoo();
	z->ShowDialog();
}

private: System::Void MenuDueño_Load(System::Object^ sender, System::EventArgs^ e) {
	// Inicializaciones al cargar el formulario
	this->label2->Text = "Administrador"; // ejemplo
}

private: System::Void cerrarSesiónToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Reiniciar la aplicación para volver al formulario de Login (asume Login es el formulario inicial)
	System::Windows::Forms::Application::Restart();
	System::Windows::Forms::Application::ExitThread();
}

private: System::Void verVentasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ msg = String::Format("Ventas acumuladas:\nNiños: {0}\nAdultos: {1}\nAdultos Mayores: {2}",
		proyectoZoo::SalesCounter::NinioCount,
		proyectoZoo::SalesCounter::AdultoCount,
		proyectoZoo::SalesCounter::AdultoMayorCount);
	MessageBox::Show(msg, "Ventas", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

// ToolStrip button handlers that act as quick shortcuts and follow the requested behavior
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Ver Ventas
	this->Hide();
	proyectoZoo::ZonaZoo^ z = gcnew proyectoZoo::ZonaZoo();
	z->ShowDialog();
	this->Show();
}

private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Membresia
	this->Hide();
	proyectoZoo::Membresia^ m = gcnew proyectoZoo::Membresia();
	m->ShowDialog();
	this->Show();
}

private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	// Vender Boleto
	this->Hide();
	proyectoZoo::VentaBoleto^ vb = gcnew proyectoZoo::VentaBoleto();
	vb->ShowDialog();
	this->Show();
}

private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Ver Ventas (reuse existing behavior)
	this->Hide();
	String^ msg = String::Format("Ventas acumuladas:\nNiños: {0}\nAdultos: {1}\nAdultos Mayores: {2}",
		proyectoZoo::SalesCounter::NinioCount,
		proyectoZoo::SalesCounter::AdultoCount,
		proyectoZoo::SalesCounter::AdultoMayorCount);
	MessageBox::Show(msg, "Ventas", MessageBoxButtons::OK, MessageBoxIcon::Information);
	this->Show();
}

// Declaration only; implementation in MenuDueño.cpp
private: System::Void toolStripButtonAdmin_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void administradorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void membresiaToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void boletoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
