#pragma once

namespace proyectoZoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Formulario para mostrar las ventas semanales
	/// Muestra ventas en efectivo y con tarjeta por separado
	/// </summary>
	public ref class ventasSemanalesForms : public System::Windows::Forms::Form
	{
	public:
		ventasSemanalesForms(void)
		{
			InitializeComponent();
			// Cargar datos de ejemplo al iniciar
			CargarDatosEjemplo();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estan usando.
		/// </summary>
		~ventasSemanalesForms()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del disenador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

		// Labels para titulos
		System::Windows::Forms::Label^ lblTitulo;
		System::Windows::Forms::Label^ lblVentasEfectivo;
		System::Windows::Forms::Label^ lblVentasTarjeta;
		System::Windows::Forms::Label^ lblTotalEfectivo;
		System::Windows::Forms::Label^ lblTotalTarjeta;
		System::Windows::Forms::Label^ lblTotalGeneral;

		// ListView para transacciones en efectivo
		System::Windows::Forms::ListView^ lvVentasEfectivo;
		System::Windows::Forms::ColumnHeader^ chClienteEfectivo;
		System::Windows::Forms::ColumnHeader^ chDescripcionEfectivo;
		System::Windows::Forms::ColumnHeader^ chMontoEfectivo;
		System::Windows::Forms::ColumnHeader^ chFechaEfectivo;

		// ListView para transacciones con tarjeta
		System::Windows::Forms::ListView^ lvVentasTarjeta;
		System::Windows::Forms::ColumnHeader^ chClienteTarjeta;
		System::Windows::Forms::ColumnHeader^ chDescripcionTarjeta;
		System::Windows::Forms::ColumnHeader^ chMontoTarjeta;
		System::Windows::Forms::ColumnHeader^ chFechaTarjeta;

		// GroupBox para organizar secciones
		System::Windows::Forms::GroupBox^ gbEfectivo;
		System::Windows::Forms::GroupBox^ gbTarjeta;
		System::Windows::Forms::GroupBox^ gbResumen;

		// Boton para cerrar
		System::Windows::Forms::Button^ btnCerrar;

		// Variables para totales
		double totalEfectivo;
		double totalTarjeta;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necesario para admitir el Disenador. No se puede modificar
		/// el contenido de este metodo con el editor de codigo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->totalEfectivo = 0.0;
			this->totalTarjeta = 0.0;

			// Inicializar controles
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblVentasEfectivo = (gcnew System::Windows::Forms::Label());
			this->lblVentasTarjeta = (gcnew System::Windows::Forms::Label());
			this->lblTotalEfectivo = (gcnew System::Windows::Forms::Label());
			this->lblTotalTarjeta = (gcnew System::Windows::Forms::Label());
			this->lblTotalGeneral = (gcnew System::Windows::Forms::Label());

			this->gbEfectivo = (gcnew System::Windows::Forms::GroupBox());
			this->gbTarjeta = (gcnew System::Windows::Forms::GroupBox());
			this->gbResumen = (gcnew System::Windows::Forms::GroupBox());

			this->lvVentasEfectivo = (gcnew System::Windows::Forms::ListView());
			this->chClienteEfectivo = (gcnew System::Windows::Forms::ColumnHeader());
			this->chDescripcionEfectivo = (gcnew System::Windows::Forms::ColumnHeader());
			this->chMontoEfectivo = (gcnew System::Windows::Forms::ColumnHeader());
			this->chFechaEfectivo = (gcnew System::Windows::Forms::ColumnHeader());

			this->lvVentasTarjeta = (gcnew System::Windows::Forms::ListView());
			this->chClienteTarjeta = (gcnew System::Windows::Forms::ColumnHeader());
			this->chDescripcionTarjeta = (gcnew System::Windows::Forms::ColumnHeader());
			this->chMontoTarjeta = (gcnew System::Windows::Forms::ColumnHeader());
			this->chFechaTarjeta = (gcnew System::Windows::Forms::ColumnHeader());

			this->btnCerrar = (gcnew System::Windows::Forms::Button());

			this->gbEfectivo->SuspendLayout();
			this->gbTarjeta->SuspendLayout();
			this->gbResumen->SuspendLayout();
			this->SuspendLayout();

			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(12, 15);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(250, 26);
			this->lblTitulo->TabIndex = 0;
			this->lblTitulo->Text = L"Ventas Semanales";
			this->lblTitulo->ForeColor = System::Drawing::Color::DarkBlue;

			// 
			// gbEfectivo - GroupBox para ventas en efectivo
			// 
			this->gbEfectivo->Controls->Add(this->lvVentasEfectivo);
			this->gbEfectivo->Controls->Add(this->lblTotalEfectivo);
			this->gbEfectivo->Location = System::Drawing::Point(12, 50);
			this->gbEfectivo->Name = L"gbEfectivo";
			this->gbEfectivo->Size = System::Drawing::Size(450, 220);
			this->gbEfectivo->TabIndex = 1;
			this->gbEfectivo->TabStop = false;
			this->gbEfectivo->Text = L"Ventas en Efectivo";
			this->gbEfectivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->gbEfectivo->ForeColor = System::Drawing::Color::DarkGreen;

			// 
			// lvVentasEfectivo - ListView para transacciones en efectivo
			// 
			this->lvVentasEfectivo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^ >(4) {
				this->chClienteEfectivo, this->chDescripcionEfectivo, this->chMontoEfectivo, this->chFechaEfectivo
			});
			this->lvVentasEfectivo->FullRowSelect = true;
			this->lvVentasEfectivo->GridLines = true;
			this->lvVentasEfectivo->HideSelection = false;
			this->lvVentasEfectivo->Location = System::Drawing::Point(10, 25);
			this->lvVentasEfectivo->Name = L"lvVentasEfectivo";
			this->lvVentasEfectivo->Size = System::Drawing::Size(430, 160);
			this->lvVentasEfectivo->TabIndex = 0;
			this->lvVentasEfectivo->UseCompatibleStateImageBehavior = false;
			this->lvVentasEfectivo->View = System::Windows::Forms::View::Details;
			this->lvVentasEfectivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lvVentasEfectivo->ForeColor = System::Drawing::Color::Black;
			this->chClienteEfectivo->Text = L"Cliente";
			this->chClienteEfectivo->Width = 120;
			this->chDescripcionEfectivo->Text = L"Descripcion";
			this->chDescripcionEfectivo->Width = 140;
			this->chMontoEfectivo->Text = L"Monto";
			this->chMontoEfectivo->Width = 80;
			this->chFechaEfectivo->Text = L"Fecha";
			this->chFechaEfectivo->Width = 85;

			// 
			// lblTotalEfectivo
			// 
			this->lblTotalEfectivo->AutoSize = true;
			this->lblTotalEfectivo->Location = System::Drawing::Point(10, 190);
			this->lblTotalEfectivo->Name = L"lblTotalEfectivo";
			this->lblTotalEfectivo->Size = System::Drawing::Size(150, 17);
			this->lblTotalEfectivo->TabIndex = 1;
			this->lblTotalEfectivo->Text = L"Total Efectivo: $0.00";
			this->lblTotalEfectivo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTotalEfectivo->ForeColor = System::Drawing::Color::DarkGreen;

			// 
			// gbTarjeta - GroupBox para ventas con tarjeta
			// 
			this->gbTarjeta->Controls->Add(this->lvVentasTarjeta);
			this->gbTarjeta->Controls->Add(this->lblTotalTarjeta);
			this->gbTarjeta->Location = System::Drawing::Point(470, 50);
			this->gbTarjeta->Name = L"gbTarjeta";
			this->gbTarjeta->Size = System::Drawing::Size(450, 220);
			this->gbTarjeta->TabIndex = 2;
			this->gbTarjeta->TabStop = false;
			this->gbTarjeta->Text = L"Ventas con Tarjeta";
			this->gbTarjeta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->gbTarjeta->ForeColor = System::Drawing::Color::DarkBlue;

			// 
			// lvVentasTarjeta - ListView para transacciones con tarjeta
			// 
			this->lvVentasTarjeta->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^ >(4) {
				this->chClienteTarjeta, this->chDescripcionTarjeta, this->chMontoTarjeta, this->chFechaTarjeta
			});
			this->lvVentasTarjeta->FullRowSelect = true;
			this->lvVentasTarjeta->GridLines = true;
			this->lvVentasTarjeta->HideSelection = false;
			this->lvVentasTarjeta->Location = System::Drawing::Point(10, 25);
			this->lvVentasTarjeta->Name = L"lvVentasTarjeta";
			this->lvVentasTarjeta->Size = System::Drawing::Size(430, 160);
			this->lvVentasTarjeta->TabIndex = 0;
			this->lvVentasTarjeta->UseCompatibleStateImageBehavior = false;
			this->lvVentasTarjeta->View = System::Windows::Forms::View::Details;
			this->lvVentasTarjeta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lvVentasTarjeta->ForeColor = System::Drawing::Color::Black;
			this->chClienteTarjeta->Text = L"Cliente";
			this->chClienteTarjeta->Width = 120;
			this->chDescripcionTarjeta->Text = L"Descripcion";
			this->chDescripcionTarjeta->Width = 140;
			this->chMontoTarjeta->Text = L"Monto";
			this->chMontoTarjeta->Width = 80;
			this->chFechaTarjeta->Text = L"Fecha";
			this->chFechaTarjeta->Width = 85;

			// 
			// lblTotalTarjeta
			// 
			this->lblTotalTarjeta->AutoSize = true;
			this->lblTotalTarjeta->Location = System::Drawing::Point(10, 190);
			this->lblTotalTarjeta->Name = L"lblTotalTarjeta";
			this->lblTotalTarjeta->Size = System::Drawing::Size(150, 17);
			this->lblTotalTarjeta->TabIndex = 1;
			this->lblTotalTarjeta->Text = L"Total Tarjeta: $0.00";
			this->lblTotalTarjeta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTotalTarjeta->ForeColor = System::Drawing::Color::DarkBlue;

			// 
			// gbResumen - GroupBox para resumen de ventas
			// 
			this->gbResumen->Controls->Add(this->lblTotalGeneral);
			this->gbResumen->Location = System::Drawing::Point(12, 280);
			this->gbResumen->Name = L"gbResumen";
			this->gbResumen->Size = System::Drawing::Size(908, 60);
			this->gbResumen->TabIndex = 3;
			this->gbResumen->TabStop = false;
			this->gbResumen->Text = L"Resumen de Ventas Semanales";
			this->gbResumen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->gbResumen->ForeColor = System::Drawing::Color::DarkRed;

			// 
			// lblTotalGeneral
			// 
			this->lblTotalGeneral->AutoSize = true;
			this->lblTotalGeneral->Location = System::Drawing::Point(10, 25);
			this->lblTotalGeneral->Name = L"lblTotalGeneral";
			this->lblTotalGeneral->Size = System::Drawing::Size(300, 20);
			this->lblTotalGeneral->TabIndex = 0;
			this->lblTotalGeneral->Text = L"TOTAL VENTAS (Efectivo + Tarjeta): $0.00";
			this->lblTotalGeneral->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTotalGeneral->ForeColor = System::Drawing::Color::DarkRed;

			// 
			// btnCerrar
			// 
			this->btnCerrar->Location = System::Drawing::Point(420, 350);
			this->btnCerrar->Name = L"btnCerrar";
			this->btnCerrar->Size = System::Drawing::Size(100, 30);
			this->btnCerrar->TabIndex = 4;
			this->btnCerrar->Text = L"Cerrar";
			this->btnCerrar->UseVisualStyleBackColor = true;
			this->btnCerrar->Click += gcnew System::EventHandler(this, &ventasSemanalesForms::btnCerrar_Click);

			// 
			// ventasSemanalesForms
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(940, 400);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->gbEfectivo);
			this->Controls->Add(this->gbTarjeta);
			this->Controls->Add(this->gbResumen);
			this->Controls->Add(this->btnCerrar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ventasSemanalesForms";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ventas Semanales";
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->gbEfectivo->ResumeLayout(false);
			this->gbEfectivo->PerformLayout();
			this->gbTarjeta->ResumeLayout(false);
			this->gbTarjeta->PerformLayout();
			this->gbResumen->ResumeLayout(false);
			this->gbResumen->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion

	private:
		/// <summary>
		/// Cargar datos de ejemplo para demostrar la funcionalidad
		/// </summary>
		void CargarDatosEjemplo() {
			// Transacciones de ejemplo en efectivo
			AgregarVentaEfectivo("Cliente A", "Compro boleto adulto en efectivo", 10.00, "2024-01-15");
			AgregarVentaEfectivo("Cliente B", "Compro boleto nino en efectivo", 5.00, "2024-01-15");
			AgregarVentaEfectivo("Cliente C", "Compro 2 boletos en efectivo", 20.00, "2024-01-16");
			AgregarVentaEfectivo("Cliente D", "Compro membresia en efectivo", 50.00, "2024-01-17");
			AgregarVentaEfectivo("Cliente E", "Compro boleto adulto mayor en efectivo", 7.50, "2024-01-18");

			// Transacciones de ejemplo con tarjeta
			AgregarVentaTarjeta("Cliente F", "Compro boleto adulto con tarjeta", 10.00, "2024-01-15");
			AgregarVentaTarjeta("Cliente G", "Compro 3 boletos con tarjeta", 30.00, "2024-01-16");
			AgregarVentaTarjeta("Cliente H", "Compro membresia con tarjeta", 50.00, "2024-01-16");
			AgregarVentaTarjeta("Cliente I", "Compro boleto nino con tarjeta", 5.00, "2024-01-17");
			AgregarVentaTarjeta("Cliente J", "Compro 2 boletos con tarjeta", 20.00, "2024-01-18");

			// Actualizar totales
			ActualizarTotales();
		}

		/// <summary>
		/// Agregar una venta en efectivo a la lista
		/// </summary>
		void AgregarVentaEfectivo(String^ cliente, String^ descripcion, double monto, String^ fecha) {
			array<String^>^ row = gcnew array<String^>(4){ 
				cliente, 
				descripcion, 
				String::Format("${0}", monto.ToString("F2")), 
				fecha 
			};
			ListViewItem^ lvi = gcnew ListViewItem(row);
			lvi->ForeColor = System::Drawing::Color::DarkGreen;
			this->lvVentasEfectivo->Items->Add(lvi);
			this->totalEfectivo += monto;
		}

		/// <summary>
		/// Agregar una venta con tarjeta a la lista
		/// </summary>
		void AgregarVentaTarjeta(String^ cliente, String^ descripcion, double monto, String^ fecha) {
			array<String^>^ row = gcnew array<String^>(4){ 
				cliente, 
				descripcion, 
				String::Format("${0}", monto.ToString("F2")), 
				fecha 
			};
			ListViewItem^ lvi = gcnew ListViewItem(row);
			lvi->ForeColor = System::Drawing::Color::DarkBlue;
			this->lvVentasTarjeta->Items->Add(lvi);
			this->totalTarjeta += monto;
		}

		/// <summary>
		/// Actualizar los labels de totales
		/// </summary>
		void ActualizarTotales() {
			this->lblTotalEfectivo->Text = String::Format("Total Efectivo: ${0}", this->totalEfectivo.ToString("F2"));
			this->lblTotalTarjeta->Text = String::Format("Total Tarjeta: ${0}", this->totalTarjeta.ToString("F2"));
			double totalGeneral = this->totalEfectivo + this->totalTarjeta;
			this->lblTotalGeneral->Text = String::Format("TOTAL VENTAS (Efectivo + Tarjeta): ${0}", totalGeneral.ToString("F2"));
		}

	private: System::Void btnCerrar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
