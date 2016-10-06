/*
BCryptEnumContextFunctions(
	_In_ ULONG dwTable,
	_In_ LPCWSTR pszContext,
	_In_ ULONG dwInterface,
	_Inout_ ULONG* pcbBuffer,
	_Inout_
	_When_(_Old_(*ppBuffer) != NULL, _At_(*ppBuffer, _Out_writes_bytes_to_(*pcbBuffer, *pcbBuffer)))
	_When_(_Old_(*ppBuffer) == NULL, _Outptr_result_bytebuffer_all_(*pcbBuffer))
	PCRYPT_CONTEXT_FUNCTIONS *ppBuffer);
	*/