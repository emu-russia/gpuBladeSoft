signed int __thiscall sub_6F941C80(int this, signed int a2)
{
  unsigned int v2; // edx@1
  signed int result; // eax@1
  char v4; // bl@3

  v2 = *(_DWORD *)(this + 8);
  result = a2;
  if ( v2 <= *(_DWORD *)(this + 4) )
    goto LABEL_12;
  if ( a2 == -1 )
  {
    result = 0;
    *(_DWORD *)(this + 8) = v2 - 1;
    return result;
  }
  v4 = *(_BYTE *)(v2 - 1);
  if ( *(_BYTE *)(this + 32) & 0x10 || v4 == (_BYTE)a2 )
  {
    *(_DWORD *)(this + 8) = v2 - 1;
    if ( v4 != (_BYTE)a2 )
      *(_BYTE *)(v2 - 1) = a2;
  }
  else
  {
LABEL_12:
    result = -1;
  }
  return result;
}
