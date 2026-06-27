signed int __usercall sub_6F7D20C0@<eax>(_DWORD *a1@<eax>, int *a2@<edx>, int a3@<ecx>, unsigned int a4)
{
  int v4; // edi@2
  int v5; // ebx@2
  int v6; // eax@2
  signed int result; // eax@8
  unsigned int v8; // ecx@8
  signed int v9; // ebx@9
  int v10; // [sp+0h] [bp-1Ch]@1
  _DWORD *v11; // [sp+4h] [bp-18h]@1

  v11 = a1;
  v10 = *a2;
  if ( *a2 < a4 )
  {
    result = 0;
  }
  else
  {
    v4 = *a1;
    v5 = 0;
    v6 = -*a1;
    while ( v6 != v5 && -a3 != v5 && *(_BYTE *)(v4 + v5) == *(_BYTE *)(a3 + v5) )
    {
      if ( a4 == ++v5 )
        goto LABEL_7;
    }
    result = 0;
    if ( a4 != v5 )
      return result;
LABEL_7:
    if ( v10 == a4
      || (result = 0, v8 = *(_BYTE *)(v4 + v5) - 9, (unsigned __int8)v8 <= 0x17u) && (v9 = 8388627, _bittest(&v9, v8)) )
    {
      *v11 = a4 + v4;
      *a2 = v10 - a4;
      result = 1;
    }
  }
  return result;
}
