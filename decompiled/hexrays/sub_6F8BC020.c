unsigned int __thiscall sub_6F8BC020(void *this, _WORD *a2, unsigned int a3, int a4)
{
  int v4; // edi@1
  int v5; // eax@1
  unsigned int result; // eax@3
  _WORD *v7; // edx@6
  int v8; // ecx@6

  v4 = *(_DWORD *)this;
  v5 = *(_DWORD *)(*(_DWORD *)this - 12);
  if ( v5 && a4 )
  {
    result = v5 - 1;
    if ( result > a3 )
      result = a3;
    while ( !a2 )
    {
LABEL_9:
      if ( --result == -1 )
        return result;
    }
    v7 = a2;
    v8 = a4;
    while ( *(_WORD *)(v4 + 2 * result) != *v7 )
    {
      ++v7;
      if ( !--v8 )
        goto LABEL_9;
    }
  }
  else
  {
    result = -1;
  }
  return result;
}
