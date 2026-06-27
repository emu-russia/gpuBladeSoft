signed int __usercall sub_6F90DC70@<eax>(int a1@<eax>, unsigned int a2@<edx>, char a3@<cl>)
{
  int v3; // edi@1
  unsigned int v4; // esi@1
  unsigned int v5; // ebx@2
  __int16 v6; // bp@2
  int v7; // ecx@2
  signed int v8; // ecx@6
  int v10; // esi@11
  __int16 v11; // bp@11

  v3 = *(_DWORD *)a1;
  v4 = *(_DWORD *)(a1 + 4) - *(_DWORD *)a1;
  if ( v4 <= 1 )
    return -2;
  LOWORD(v5) = *(_WORD *)v3;
  v6 = __ROL2__(*(_WORD *)v3, 8);
  v7 = a3 & 1;
  if ( !v7 )
    LOWORD(v5) = v6;
  v5 = (unsigned __int16)v5;
  if ( (unsigned int)(unsigned __int16)v5 - 55296 <= 0x3FF )
  {
    if ( v4 > 3 )
    {
      LOWORD(v10) = *(_WORD *)(v3 + 2);
      v11 = __ROL2__(*(_WORD *)(v3 + 2), 8);
      if ( !v7 )
        LOWORD(v10) = v11;
      v10 = (unsigned __int16)v10;
      if ( (unsigned int)(unsigned __int16)v10 - 56320 <= 0x3FF )
      {
        v8 = 2;
        v5 = v10 + (v5 << 10) - 56613888;
        goto LABEL_7;
      }
      return -1;
    }
    return -2;
  }
  if ( v5 - 56320 <= 0x3FF )
    return -1;
  v8 = 1;
LABEL_7:
  if ( v5 <= a2 )
    *(_DWORD *)a1 = v3 + 2 * v8;
  return v5;
}
