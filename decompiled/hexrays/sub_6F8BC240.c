unsigned int __thiscall sub_6F8BC240(void *this, _WORD *a2, unsigned int a3, int a4)
{
  unsigned int result; // eax@1
  int v5; // ebp@1
  int v6; // edx@1
  _WORD *v7; // edx@6
  int v8; // ecx@6

  result = -1;
  v5 = *(_DWORD *)this;
  v6 = *(_DWORD *)(*(_DWORD *)this - 12);
  if ( v6 )
  {
    result = v6 - 1;
    if ( v6 - 1 > a3 )
      result = a3;
    do
    {
      if ( !a4 || !a2 )
        break;
      v7 = a2;
      v8 = a4;
      while ( *(_WORD *)(v5 + 2 * result) != *v7 )
      {
        ++v7;
        if ( !--v8 )
          return result;
      }
      --result;
    }
    while ( result != -1 );
  }
  return result;
}
