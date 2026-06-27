unsigned int __thiscall sub_6F8BC130(void *this, _WORD *a2, unsigned int a3, int a4)
{
  unsigned int result; // eax@1
  int v5; // edi@2
  unsigned int v6; // ebp@2
  int v7; // ecx@4
  _WORD *v8; // edx@4

  result = a3;
  if ( a4 && (v5 = *(_DWORD *)this, v6 = *(_DWORD *)(*(_DWORD *)this - 12), a3 < v6) )
  {
    while ( !a2 )
    {
LABEL_7:
      if ( ++result == v6 )
        goto LABEL_8;
    }
    v7 = a4;
    v8 = a2;
    while ( *(_WORD *)(v5 + 2 * result) != *v8 )
    {
      ++v8;
      if ( !--v7 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_8:
    result = -1;
  }
  return result;
}
