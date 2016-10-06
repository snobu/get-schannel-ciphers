#include "stdafx.h"

#include <stdio.h>
#include <windows.h>
#include <bcrypt.h>

#pragma comment(lib, "Bcrypt.lib")

void main()
{

	HRESULT Status = ERROR_SUCCESS;
	DWORD   cbBuffer = 0;
	PCRYPT_CONTEXT_FUNCTIONS pBuffer = NULL;

	Status = BCryptEnumContextFunctions(
		CRYPT_LOCAL,
		L"SSL",
		NCRYPT_SCHANNEL_INTERFACE,
		&cbBuffer,
		&pBuffer);
	if (FAILED(Status))
	{
		printf_s("\n**** Error 0x%x returned by BCryptEnumContextFunctions\n", Status);
		if (pBuffer != NULL)
		{
			BCryptFreeBuffer(pBuffer);
		}
	}

	if (pBuffer == NULL)
	{
		printf_s("\n**** Error pBuffer returned from BCryptEnumContextFunctions is null");
		if (pBuffer != NULL)
		{
			BCryptFreeBuffer(pBuffer);
		}
	}

	printf_s("\nListing Cipher Suites:\n");
	for (UINT index = 0; index < pBuffer->cFunctions; ++index)
	{
		printf_s("\n%S", pBuffer->rgpszFunctions[index]);
	}

	getchar();
}