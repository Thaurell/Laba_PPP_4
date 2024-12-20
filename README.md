Description.

This application is designed to work with an SQL Server database. It allows you to perform operations such as:

    Export data from a table to a CSV or text file.
    Add, search, update, and delete records in the database.
    Create a new table in the database.

Features:

    Create Table:
        Create a new table in the database with a predefined structure.
        Uses a SQL query to create a table with columns: ID, TariffName, Cost, and Discount.

    Add Data:
        Add a new record to the table with fields TariffName, Cost, Discount.
        Includes validation for user input (e.g., checking if the discount is correct).

    Search Data:
        Search for records by fields TariffName, Cost, Discount.
        You can search by exact values or use partial matches for string fields.

    Delete Data:
        Delete a record by its unique ID.
        A confirmation prompt appears before executing the deletion.

    Export Data:
        Export all data from a selected table to a CSV or TXT file.
        Each column and row is written to the file, with handling for separators if present in the values.

    Refresh Data Display:
        Refresh the table in the DataGridView after performing insert, delete, or update operations.

Requirements:

    Microsoft SQL Server.
    C++/CLI with Windows Forms.
    .NET Framework (e.g., version 4.8).

Installation Instructions:

    Download the source code.
    Compile the project in Visual Studio.
    Connect to your SQL Server database.

Notes:

    Make sure you have appropriate permissions to create tables and modify data in the database.
    The application works with one table, and the table name is specified by the user.
