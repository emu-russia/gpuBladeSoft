int __usercall sub_6F8A4270@<eax>(int result@<eax>, int a2@<edx>, _DWORD *a3@<ecx>, char a4)
{
  int v4; // ecx@4
  _DWORD *v5; // ebx@5

  if ( a4 & 1 || result != -1 )
  {
    if ( *(_BYTE *)(a2 + 4100) & 1 )
    {
      --*a3;
      v4 = *(_DWORD *)(a2 + 4104);
      *(_DWORD *)(a2 + 4 * v4 + 4) = result;
      *(_DWORD *)(a2 + 4104) = v4 + 1;
    }
    else
    {
      v5 = a3;
      result = ungetc(result, *(FILE **)a2);
      --*v5;
    }
  }
  return result;
}
