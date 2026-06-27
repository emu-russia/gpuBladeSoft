int __cdecl sub_6F8B0170(int a1)
{
  int *v1; // edx@1
  unsigned int v2; // ebx@1
  int result; // eax@2

  v1 = (int *)(a1 + 20);
  v2 = a1 + 20 + 4 * *(_DWORD *)(a1 + 16);
  if ( a1 + 20 >= v2 )
  {
    result = 0;
  }
  else
  {
    _ECX = *(_DWORD *)(a1 + 20);
    result = 0;
    if ( _ECX )
    {
LABEL_7:
      __asm { tzcnt   ecx, ecx }
      result += _ECX;
    }
    else
    {
      while ( 1 )
      {
        ++v1;
        result += 32;
        if ( v2 <= (unsigned int)v1 )
          break;
        _ECX = *v1;
        if ( *v1 )
          goto LABEL_7;
      }
    }
  }
  return result;
}
