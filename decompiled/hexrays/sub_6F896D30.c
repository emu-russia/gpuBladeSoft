signed int __usercall sub_6F896D30@<eax>(_DWORD *a1@<eax>)
{
  _DWORD *v1; // edi@1
  int v2; // ebx@1
  int v3; // ecx@1
  _BYTE *v4; // ebx@4
  int v5; // esi@4
  int v6; // eax@6
  int v7; // eax@7
  signed int v9; // [sp+0h] [bp-14h]@3

  v1 = a1;
  v2 = *a1;
  v3 = *(_BYTE *)*a1;
  if ( (_BYTE)v3 != 110 )
  {
    if ( (unsigned __int8)(v3 - 48) <= 9u )
    {
      v9 = 0;
      goto LABEL_4;
    }
    return 0;
  }
  *a1 = v2 + 1;
  v3 = *(_BYTE *)(v2 + 1);
  if ( (unsigned __int8)(v3 - 48) > 9u )
    return 0;
  ++v2;
  v9 = 1;
LABEL_4:
  v4 = (_BYTE *)(v2 + 1);
  v5 = 0;
  while ( 1 )
  {
    *v1 = v4;
    v6 = v3 + 10 * v5;
    v3 = *v4;
    v5 = v6 - 48;
    if ( (unsigned __int8)(v3 - 48) > 9u )
      break;
    ++v4;
    if ( (signed int)((0x7FFFFFFF - (v3 - 48)) / 0xAu) < v5 )
      return -1;
  }
  v7 = 48 - v6;
  if ( v9 )
    v5 = v7;
  return v5;
}
