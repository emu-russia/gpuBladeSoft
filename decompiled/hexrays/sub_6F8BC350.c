unsigned int __thiscall sub_6F8BC350(void *this, _WORD *a2, unsigned int a3, int a4)
{
  int v4; // esi@1
  unsigned int result; // eax@1
  unsigned int v6; // ebp@1
  __int16 v7; // bx@3
  _WORD *v8; // edx@4
  int v9; // ecx@4

  v4 = *(_DWORD *)this;
  result = a3;
  v6 = *(_DWORD *)(*(_DWORD *)this - 12);
  if ( a3 >= v6 )
    return -1;
  if ( a4 )
  {
    v7 = *(_WORD *)(v4 + 2 * a3);
    if ( a2 )
    {
      while ( 1 )
      {
        v8 = a2;
        v9 = a4;
        while ( *v8 != v7 )
        {
          ++v8;
          if ( !--v9 )
            return result;
        }
        if ( ++result == v6 )
          break;
        v7 = *(_WORD *)(v4 + 2 * result);
      }
      return -1;
    }
  }
  return result;
}
