unsigned int __thiscall sub_6F8C7C40(int this, _WORD *a2, unsigned int a3, int a4)
{
  unsigned int result; // eax@1
  int v5; // edx@1
  int v6; // ebp@2
  _WORD *v7; // edx@6
  int v8; // ecx@6

  result = -1;
  v5 = *(_DWORD *)(this + 4);
  if ( v5 )
  {
    result = v5 - 1;
    v6 = *(_DWORD *)this;
    if ( v5 - 1 > a3 )
      result = a3;
    do
    {
      if ( !a4 || !a2 )
        break;
      v7 = a2;
      v8 = a4;
      while ( *(_WORD *)(v6 + 2 * result) != *v7 )
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
