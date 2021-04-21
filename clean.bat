for /r %%i in (.vs .vscode bin build) do (
    rd /s /q "%%i"
)