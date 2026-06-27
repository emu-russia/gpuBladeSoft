signed int __thiscall sub_6F943D10(int this, signed int a2)
{
  unsigned int v2; // edx@1
  signed int result; // eax@1
  signed int v4; // esi@3

  v2 = *(_DWORD *)(this + 8);
  result = -1;
  if ( v2 > *(_DWORD *)(this + 4) )
  {
    if ( (_WORD)a2 == -1 )
    {
      result = 0;
      *(_DWORD *)(this + 8) = v2 - 2;
    }
    else
    {
      v4 = *(_WORD *)(v2 - 2);
      if ( *(_BYTE *)(this + 32) & 0x10 || (_WORD)v4 == (_WORD)a2 )
      {
        *(_DWORD *)(this + 8) = v2 - 2;
        result = v4;
        if ( (_WORD)v4 != (_WORD)a2 )
        {
          *(_WORD *)(v2 - 2) = a2;
          result = a2;
        }
      }
    }
  }
  return result;
}
