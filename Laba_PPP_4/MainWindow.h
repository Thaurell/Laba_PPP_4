#include <fstream>
#include "ConnectWindow.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
namespace DBC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Data::SqlClient;
	using namespace DBC;
	/// <summary>
	///
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		SqlConnection^ connection;
		MainWindow(SqlConnection^ connection) {
			this->connection = connection;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// 
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ CreateTable_btn;
	private: System::Windows::Forms::Label^ Create_label;
	private: System::Windows::Forms::TextBox^ Table_txt;
	private: System::Windows::Forms::TextBox^ Tariff_txt_add;
	private: System::Windows::Forms::TextBox^ PerMin_txt_add;
	private: System::Windows::Forms::TextBox^ ID_txt_record;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ TariffName_txt_search;
	private: System::Windows::Forms::Button^ TariffName_search_btn;
	private: System::Windows::Forms::TextBox^ Revenue_txt_search;
	private: System::Windows::Forms::TextBox^ PerMin_txt_search;
	private: System::Windows::Forms::Button^ PerMin_search_btn;
	private: System::Windows::Forms::Button^ Revenue_search_btn;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ Id_txt_delete;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Delete_btn;

	private: System::Windows::Forms::Button^ refresh;
	private: System::Windows::Forms::Button^ close_btn;
	private: System::Windows::Forms::Button^ to_txt_btn;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::TextBox^ Min_txt_Record;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ RecordMinutes_button;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->CreateTable_btn = (gcnew System::Windows::Forms::Button());
			this->Create_label = (gcnew System::Windows::Forms::Label());
			this->Table_txt = (gcnew System::Windows::Forms::TextBox());
			this->Tariff_txt_add = (gcnew System::Windows::Forms::TextBox());
			this->PerMin_txt_add = (gcnew System::Windows::Forms::TextBox());
			this->ID_txt_record = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TariffName_txt_search = (gcnew System::Windows::Forms::TextBox());
			this->TariffName_search_btn = (gcnew System::Windows::Forms::Button());
			this->Revenue_txt_search = (gcnew System::Windows::Forms::TextBox());
			this->PerMin_txt_search = (gcnew System::Windows::Forms::TextBox());
			this->PerMin_search_btn = (gcnew System::Windows::Forms::Button());
			this->Revenue_search_btn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Id_txt_delete = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Delete_btn = (gcnew System::Windows::Forms::Button());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->close_btn = (gcnew System::Windows::Forms::Button());
			this->to_txt_btn = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->Min_txt_Record = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->RecordMinutes_button = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// CreateTable_btn
			// 
			this->CreateTable_btn->Location = System::Drawing::Point(183, 31);
			this->CreateTable_btn->Name = L"CreateTable_btn";
			this->CreateTable_btn->Size = System::Drawing::Size(75, 23);
			this->CreateTable_btn->TabIndex = 2;
			this->CreateTable_btn->Text = L"Create";
			this->CreateTable_btn->UseVisualStyleBackColor = true;
			this->CreateTable_btn->Click += gcnew System::EventHandler(this, &MainWindow::CreateTable_btn_Click);
			// 
			// Create_label
			// 
			this->Create_label->AutoSize = true;
			this->Create_label->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Create_label->Location = System::Drawing::Point(64, 15);
			this->Create_label->Name = L"Create_label";
			this->Create_label->Size = System::Drawing::Size(64, 13);
			this->Create_label->TabIndex = 1;
			this->Create_label->Text = L"Create table";
			this->Create_label->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click);
			// 
			// Table_txt
			// 
			this->Table_txt->Location = System::Drawing::Point(12, 33);
			this->Table_txt->MaxLength = 16;
			this->Table_txt->Name = L"Table_txt";
			this->Table_txt->Size = System::Drawing::Size(165, 20);
			this->Table_txt->TabIndex = 0;
			this->Table_txt->TextChanged += gcnew System::EventHandler(this, &MainWindow::Table_txt_TextChanged);
			// 
			// Tariff_txt_add
			// 
			this->Tariff_txt_add->Location = System::Drawing::Point(12, 110);
			this->Tariff_txt_add->Name = L"Tariff_txt_add";
			this->Tariff_txt_add->Size = System::Drawing::Size(165, 20);
			this->Tariff_txt_add->TabIndex = 3;
			// 
			// PerMin_txt_add
			// 
			this->PerMin_txt_add->Location = System::Drawing::Point(12, 138);
			this->PerMin_txt_add->Name = L"PerMin_txt_add";
			this->PerMin_txt_add->Size = System::Drawing::Size(165, 20);
			this->PerMin_txt_add->TabIndex = 4;
			// 
			// ID_txt_record
			// 
			this->ID_txt_record->Location = System::Drawing::Point(12, 243);
			this->ID_txt_record->Name = L"ID_txt_record";
			this->ID_txt_record->Size = System::Drawing::Size(165, 20);
			this->ID_txt_record->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(183, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Tariff Name";
			this->label1->Click += gcnew System::EventHandler(this, &MainWindow::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(183, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(54, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Cost's tariff";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(183, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"ID";
			this->label3->Click += gcnew System::EventHandler(this, &MainWindow::label3_Click);
			// 
			// add_btn
			// 
			this->add_btn->Location = System::Drawing::Point(12, 167);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(165, 23);
			this->add_btn->TabIndex = 9;
			this->add_btn->Text = L"Add data";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &MainWindow::add_btn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(80, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Add";
			// 
			// TariffName_txt_search
			// 
			this->TariffName_txt_search->Location = System::Drawing::Point(282, 109);
			this->TariffName_txt_search->Name = L"TariffName_txt_search";
			this->TariffName_txt_search->Size = System::Drawing::Size(165, 20);
			this->TariffName_txt_search->TabIndex = 11;
			// 
			// TariffName_search_btn
			// 
			this->TariffName_search_btn->Location = System::Drawing::Point(453, 107);
			this->TariffName_search_btn->Name = L"TariffName_search_btn";
			this->TariffName_search_btn->Size = System::Drawing::Size(113, 23);
			this->TariffName_search_btn->TabIndex = 12;
			this->TariffName_search_btn->Text = L"Tariff Name";
			this->TariffName_search_btn->UseVisualStyleBackColor = true;
			this->TariffName_search_btn->Click += gcnew System::EventHandler(this, &MainWindow::TariffName_search_btn_Click);
			// 
			// Revenue_txt_search
			// 
			this->Revenue_txt_search->Location = System::Drawing::Point(282, 168);
			this->Revenue_txt_search->Name = L"Revenue_txt_search";
			this->Revenue_txt_search->Size = System::Drawing::Size(165, 20);
			this->Revenue_txt_search->TabIndex = 13;
			// 
			// PerMin_txt_search
			// 
			this->PerMin_txt_search->Location = System::Drawing::Point(282, 140);
			this->PerMin_txt_search->Name = L"PerMin_txt_search";
			this->PerMin_txt_search->Size = System::Drawing::Size(165, 20);
			this->PerMin_txt_search->TabIndex = 14;
			// 
			// PerMin_search_btn
			// 
			this->PerMin_search_btn->Location = System::Drawing::Point(453, 138);
			this->PerMin_search_btn->Name = L"PerMin_search_btn";
			this->PerMin_search_btn->Size = System::Drawing::Size(113, 23);
			this->PerMin_search_btn->TabIndex = 15;
			this->PerMin_search_btn->Text = L"Amount";
			this->PerMin_search_btn->UseVisualStyleBackColor = true;
			this->PerMin_search_btn->Click += gcnew System::EventHandler(this, &MainWindow::PerMin_search_btn_Click);
			// 
			// Revenue_search_btn
			// 
			this->Revenue_search_btn->Location = System::Drawing::Point(453, 168);
			this->Revenue_search_btn->Name = L"Revenue_search_btn";
			this->Revenue_search_btn->Size = System::Drawing::Size(113, 23);
			this->Revenue_search_btn->TabIndex = 16;
			this->Revenue_search_btn->Text = L"Profit";
			this->Revenue_search_btn->UseVisualStyleBackColor = true;
			this->Revenue_search_btn->Click += gcnew System::EventHandler(this, &MainWindow::Revenue_search_btn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(345, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Search";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(643, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Delete";
			// 
			// Id_txt_delete
			// 
			this->Id_txt_delete->Location = System::Drawing::Point(613, 109);
			this->Id_txt_delete->Name = L"Id_txt_delete";
			this->Id_txt_delete->Size = System::Drawing::Size(100, 20);
			this->Id_txt_delete->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(719, 113);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"ID";
			this->label7->Click += gcnew System::EventHandler(this, &MainWindow::label7_Click);
			// 
			// Delete_btn
			// 
			this->Delete_btn->Location = System::Drawing::Point(613, 137);
			this->Delete_btn->Name = L"Delete_btn";
			this->Delete_btn->Size = System::Drawing::Size(100, 23);
			this->Delete_btn->TabIndex = 21;
			this->Delete_btn->Text = L"Delete";
			this->Delete_btn->UseVisualStyleBackColor = true;
			this->Delete_btn->Click += gcnew System::EventHandler(this, &MainWindow::Delete_btn_Click);
			// 
			// refresh
			// 
			this->refresh->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->refresh->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->refresh->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->refresh->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->refresh->Location = System::Drawing::Point(739, 295);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(64, 36);
			this->refresh->TabIndex = 24;
			this->refresh->Text = L"Refresh";
			this->refresh->UseVisualStyleBackColor = false;
			this->refresh->Click += gcnew System::EventHandler(this, &MainWindow::refresh_Click);
			// 
			// close_btn
			// 
			this->close_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->close_btn->Location = System::Drawing::Point(739, 15);
			this->close_btn->Name = L"close_btn";
			this->close_btn->Size = System::Drawing::Size(64, 36);
			this->close_btn->TabIndex = 25;
			this->close_btn->Text = L"Exit";
			this->close_btn->UseVisualStyleBackColor = true;
			this->close_btn->Click += gcnew System::EventHandler(this, &MainWindow::button1_Click);
			// 
			// to_txt_btn
			// 
			this->to_txt_btn->Location = System::Drawing::Point(638, 295);
			this->to_txt_btn->Name = L"to_txt_btn";
			this->to_txt_btn->Size = System::Drawing::Size(75, 36);
			this->to_txt_btn->TabIndex = 27;
			this->to_txt_btn->Text = L"save";
			this->to_txt_btn->UseVisualStyleBackColor = true;
			this->to_txt_btn->Click += gcnew System::EventHandler(this, &MainWindow::to_txt_btn_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"txt";
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainWindow::saveFileDialog1_FileOk);
			// 
			// Min_txt_Record
			// 
			this->Min_txt_Record->Location = System::Drawing::Point(12, 280);
			this->Min_txt_Record->Name = L"Min_txt_Record";
			this->Min_txt_Record->Size = System::Drawing::Size(165, 20);
			this->Min_txt_Record->TabIndex = 28;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(183, 283);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 13);
			this->label8->TabIndex = 29;
			this->label8->Text = L"Amount";
			// 
			// RecordMinutes_button
			// 
			this->RecordMinutes_button->Location = System::Drawing::Point(12, 308);
			this->RecordMinutes_button->Name = L"RecordMinutes_button";
			this->RecordMinutes_button->Size = System::Drawing::Size(165, 23);
			this->RecordMinutes_button->TabIndex = 30;
			this->RecordMinutes_button->Text = L"Record";
			this->RecordMinutes_button->UseVisualStyleBackColor = true;
			this->RecordMinutes_button->Click += gcnew System::EventHandler(this, &MainWindow::RecordMinutes_button_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 337);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(791, 237);
			this->dataGridView1->TabIndex = 22;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(815, 582);
			this->ControlBox = false;
			this->Controls->Add(this->RecordMinutes_button);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Min_txt_Record);
			this->Controls->Add(this->to_txt_btn);
			this->Controls->Add(this->close_btn);
			this->Controls->Add(this->refresh);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->Delete_btn);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->Id_txt_delete);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Revenue_search_btn);
			this->Controls->Add(this->PerMin_search_btn);
			this->Controls->Add(this->PerMin_txt_search);
			this->Controls->Add(this->Revenue_txt_search);
			this->Controls->Add(this->TariffName_search_btn);
			this->Controls->Add(this->TariffName_txt_search);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ID_txt_record);
			this->Controls->Add(this->PerMin_txt_add);
			this->Controls->Add(this->Tariff_txt_add);
			this->Controls->Add(this->CreateTable_btn);
			this->Controls->Add(this->Create_label);
			this->Controls->Add(this->Table_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainWindow";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CreateTable_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			
			if (String::IsNullOrWhiteSpace(Table_txt->Text)) {
				MessageBox::Show("Please enter a valid table name.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			
			String^ createTableQuery =
				"CREATE TABLE " +
				Table_txt->Text + " (\n" +
				"ID INT PRIMARY KEY IDENTITY,\n" +
				"TariffName NVARCHAR(50) NOT NULL,\n" +
				"PerMin DECIMAL(18, 2) NOT NULL,\n" + 
				"Min INT NOT NULL,\n" +              
				"Revenue DECIMAL(18, 2) NOT NULL\n" + 
				");";

			
			SqlCommand^ sqlCommand = gcnew SqlCommand(createTableQuery, connection);
			sqlCommand->ExecuteNonQuery();
			MessageBox::Show("Table created successfully.",
				"Success",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
		catch (SqlException^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		RefreshDataGridView(dataGridView1);
	}



	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Table_txt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: void RefreshDataGridView(DataGridView^ dataGridView)
	{
		try
		{
			// SQL command to select data
			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(
				"SELECT ID, TariffName, PerMin, Min, Revenue FROM " + Table_txt->Text, connection);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);

			// Set the DataSource for the DataGridView
			dataGridView->DataSource = dataTable;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			
			String^ tariffName = Tariff_txt_add->Text->Trim();
			if (String::IsNullOrWhiteSpace(tariffName)) {
				MessageBox::Show("Tariff name cannot be empty.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			
			String^ checkQuery = "SELECT COUNT(*) FROM " + Table_txt->Text + " WHERE TariffName = @TariffName;";
			SqlCommand^ checkCommand = gcnew SqlCommand(checkQuery, connection);
			checkCommand->Parameters->AddWithValue("@TariffName", tariffName);
			int existingCount = Convert::ToInt32(checkCommand->ExecuteScalar());

			if (existingCount > 0) {
				MessageBox::Show("A tariff with this name already exists.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			
			double perMin = Convert::ToDouble(PerMin_txt_add->Text);
			if (perMin <= 0 || perMin >= 1000000) {
				MessageBox::Show("Price za minutu must be greater than zero and no more 1 million.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			
			// Revenue будет рассчитан при добавлении минут

			
			String^ insertQuery = "INSERT INTO " + Table_txt->Text + " (TariffName, PerMin, Min, Revenue) VALUES (@TariffName, @PerMin, 0, 0);";
			SqlCommand^ sqlCommand = gcnew SqlCommand(insertQuery, connection);

			
			sqlCommand->Parameters->AddWithValue("@TariffName", tariffName);
			sqlCommand->Parameters->AddWithValue("@PerMin", perMin);

			
			sqlCommand->ExecuteNonQuery();
			MessageBox::Show("Tariff added successfully.",
				"Success",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);

			
			RefreshDataGridView(dataGridView1);

			
			Tariff_txt_add->Text = "";
			PerMin_txt_add->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error has occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		RefreshDataGridView(dataGridView1);
	}



	private: System::Void TariffName_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			
			String^ searchQuery = "SELECT ID, TariffName, PerMin, Min, Revenue FROM " + Table_txt->Text +
				" WHERE TariffName LIKE @SearchValue;";
			SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
			sqlCommand->Parameters->AddWithValue("@SearchValue", "%" + TariffName_txt_search->Text + "%");

			
			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(sqlCommand);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);

			
			dataGridView1->DataSource = dataTable;

			
			TariffName_txt_search->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}



	private: System::Void PerMin_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			
			String^ searchValue = PerMin_txt_search->Text->Trim();

			
			if (String::IsNullOrWhiteSpace(searchValue)) {
				MessageBox::Show("Please enter a value for Per Minute to search.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			
			double perMinValue;
			if (!Double::TryParse(searchValue, perMinValue)) {
				MessageBox::Show("Please enter a valid numeric value for Per Minute.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			
			String^ searchQuery = "SELECT ID, TariffName, PerMin, Min, Revenue FROM " + Table_txt->Text +
				" WHERE PerMin = @SearchValue;";
			SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
			sqlCommand->Parameters->AddWithValue("@SearchValue", perMinValue);

			
			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(sqlCommand);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);

			
			dataGridView1->DataSource = dataTable;

			
			PerMin_txt_search->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}

	private: System::Void Revenue_search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Получение значения для поиска
			String^ searchValue = Revenue_txt_search->Text->Trim();

			// Проверка на пустой ввод
			if (String::IsNullOrWhiteSpace(searchValue)) {
				MessageBox::Show("Please enter a revenue value to search.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// Проверка, является ли введённое значение числом
			double revenueValue;
			if (!Double::TryParse(searchValue, revenueValue)) {
				MessageBox::Show("Please enter a valid numeric value for revenue.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// Подготовка команды поиска
			String^ searchQuery = "SELECT ID, TariffName, PerMin, Min, Revenue FROM " + Table_txt->Text +
				" WHERE Revenue = @SearchValue;";
			SqlCommand^ sqlCommand = gcnew SqlCommand(searchQuery, connection);
			sqlCommand->Parameters->AddWithValue("@SearchValue", revenueValue);

			// Выполнение команды и заполнение таблицы результатами
			SqlDataAdapter^ sqlDataAdapter = gcnew SqlDataAdapter(sqlCommand);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);

			// Проверка, есть ли результаты
			if (dataTable->Rows->Count == 0) {
				MessageBox::Show("No results found for the specified revenue.",
					"Info",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
			else {
				// Привязка результатов поиска к DataGridView
				dataGridView1->DataSource = dataTable;
			}

			// Очистка поля поиска
			Revenue_txt_search->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}


	private: System::Void Delete_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// Проверка на пустой ввод
			String^ idValue = Id_txt_delete->Text->Trim();
			if (String::IsNullOrWhiteSpace(idValue)) {
				MessageBox::Show("Please enter a valid ID to delete.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// Проверка, является ли введённое значение числом
			int id;
			if (!Int32::TryParse(idValue, id)) {
				MessageBox::Show("The ID must be a valid numeric value.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				return;
			}

			// Подтверждение удаления
			if (MessageBox::Show("Are you sure you want to delete the record with ID: " + id + "?",
				"Confirm Deletion",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::No) {
				return;
			}

			// Проверяем подключение
			if (connection->State != ConnectionState::Open) {
				connection->Open();
			}

			// Подготовка команды SQL для проверки существования записи
			String^ checkQuery = "SELECT COUNT(*) FROM " + Table_txt->Text + " WHERE ID = @ID;";
			SqlCommand^ checkCommand = gcnew SqlCommand(checkQuery, connection);
			checkCommand->Parameters->AddWithValue("@ID", id);

			// Выполнение команды для проверки существования записи
			int count = (int)checkCommand->ExecuteScalar();
			delete checkCommand; // Освобождаем ресурсы
			if (count == 0) {
				MessageBox::Show("No record found with the specified ID.",
					"Info",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
				return;
			}

			// Подготовка команды SQL для удаления
			String^ deleteQuery = "DELETE FROM " + Table_txt->Text + " WHERE ID = @ID;";
			SqlCommand^ deleteCommand = gcnew SqlCommand(deleteQuery, connection);
			deleteCommand->Parameters->AddWithValue("@ID", id);

			// Выполнение команды
			int rowsAffected = deleteCommand->ExecuteNonQuery();
			delete deleteCommand; // Освобождаем ресурсы

			if (rowsAffected > 0) {
				MessageBox::Show("Record deleted successfully.",
					"Success",
					MessageBoxButtons::OK,
					MessageBoxIcon::Information);
			}
			else {
				MessageBox::Show("Unexpected error: No records were deleted.",
					"Error",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}

			// Обновление отображения данных
			RefreshDataGridView(dataGridView1);

			// Очистка поля ввода
			Id_txt_delete->Text = "";
		}
		catch (SqlException^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An unexpected error occurred: " + ex->Message,
				"Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
		RefreshDataGridView(dataGridView1);
	}

	private: System::Void refresh_Click(System::Object^ sender, System::EventArgs^ e) {
		RefreshDataGridView(dataGridView1);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void to_txt_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->ShowDialog(); // Открыть диалоговое окно сохранения файла
	}
	private: System::Void string_sep_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void box_sep_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	String^ filePath = saveFileDialog1->FileName; // Получить путь к файлу

	try {
		// SQL-запрос для извлечения данных из таблицы
		String^ query = "SELECT ID, TariffName, PerMin, Min, Revenue FROM " + Table_txt->Text + ";";
		SqlCommand^ command = gcnew SqlCommand(query, connection);

		// Выполнение запроса и чтение данных
		SqlDataReader^ reader = command->ExecuteReader();

		// Проверка на наличие данных
		if (!reader->HasRows) {
			MessageBox::Show("No data found to export.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Открытие потока для записи в файл
		std::ofstream outFile(msclr::interop::marshal_as<std::string>(filePath));
		if (!outFile.is_open()) {
			MessageBox::Show("Unable to open the file for writing.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Запись заголовков столбцов
		outFile << "ID\tTariffName\tPerMin\tMin\tRevenue\n";

		// Запись данных из базы в файл
		while (reader->Read()) {
			outFile << msclr::interop::marshal_as<std::string>(reader["ID"]->ToString()) << "\t"
				<< msclr::interop::marshal_as<std::string>(reader["TariffName"]->ToString()) << "\t"
				<< msclr::interop::marshal_as<std::string>(reader["PerMin"]->ToString()) << "\t"
				<< msclr::interop::marshal_as<std::string>(reader["Min"]->ToString()) << "\t"
				<< msclr::interop::marshal_as<std::string>(reader["Revenue"]->ToString()) << "\n";
		}

		reader->Close();  // Закрытие SqlDataReader
		outFile.close();  // Закрытие потока

		// Уведомление об успешном сохранении
		MessageBox::Show("File saved successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (SqlException^ ex) {
		MessageBox::Show("Database error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (IOException^ ex) {
		MessageBox::Show("File system error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->ShowDialog(); // Открыть диалоговое окно сохранения файла
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RecordMinutes_button_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Получение значений из текстовых полей
		String^ idValue = ID_txt_record->Text->Trim();
		String^ minValue = Min_txt_Record->Text->Trim();

		// Проверка на пустой ввод
		if (String::IsNullOrWhiteSpace(idValue) || String::IsNullOrWhiteSpace(minValue)) {
			MessageBox::Show("Please enter both ID and Minutes.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Проверка, является ли введённое значение ID числом
		int id;
		if (!Int32::TryParse(idValue, id)) {
			MessageBox::Show("The ID must be a valid numeric value.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Проверка, является ли введённое количество минут числом
		int minutes;
		if (!Int32::TryParse(minValue, minutes) || minutes <= 0) {
			MessageBox::Show("Please enter a valid number of minutes.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// SQL-запрос для получения данных по ID (сразу возвращаем нужные значения)
		String^ query = "SELECT PerMin, Min, Revenue FROM " + Table_txt->Text + " WHERE ID = @ID;";
		SqlCommand^ command = gcnew SqlCommand(query, connection);
		command->Parameters->AddWithValue("@ID", id);

		// Выполнение запроса и извлечение значений в одну строку
		DataTable^ dataTable = gcnew DataTable();
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		dataAdapter->Fill(dataTable);

		if (dataTable->Rows->Count == 0) {
			MessageBox::Show("No record found with the specified ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Извлечение данных из первой строки
		DataRow^ row = dataTable->Rows[0];

		// Используем безопасное извлечение значений с проверкой на DBNull
		double perMin = (row["PerMin"] != DBNull::Value) ? Convert::ToDouble(row["PerMin"]) : 0.0;
		int currentMin = (row["Min"] != DBNull::Value) ? Convert::ToInt32(row["Min"]) : 0;
		double currentRevenue = (row["Revenue"] != DBNull::Value) ? Convert::ToDouble(row["Revenue"]) : 0.0;

		// Обновление количества минут и расчёт новой выручки
		int newMin = currentMin + minutes;
		double newRevenue = newMin * perMin;

		// SQL-запрос для обновления записи
		String^ updateQuery = "UPDATE " + Table_txt->Text + " SET Min = @NewMin, Revenue = @NewRevenue WHERE ID = @ID;";
		SqlCommand^ updateCommand = gcnew SqlCommand(updateQuery, connection);
		updateCommand->Parameters->AddWithValue("@NewMin", newMin);
		updateCommand->Parameters->AddWithValue("@NewRevenue", newRevenue);
		updateCommand->Parameters->AddWithValue("@ID", id);

		// Выполнение обновления
		updateCommand->ExecuteNonQuery();

		MessageBox::Show("Record updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (SqlException^ ex) {
		MessageBox::Show("Database error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (FormatException^ ex) {
		MessageBox::Show("Format error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("An unexpected error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	RefreshDataGridView(dataGridView1);
}


};
}
#endif // MAINWINDOW_H