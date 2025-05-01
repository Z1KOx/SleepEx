.code
	NtDelayExecution proc
			mov r10, rcx
			mov eax, 34h    ; Syscall ID for NtDelayExecution
			syscall
			ret
	NtDelayExecution endp
end