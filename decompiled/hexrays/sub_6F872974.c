char __usercall sub_6F872974@<al>(int a1@<eax>)
{
  int v1; // esi@1
  int v2; // ebx@1
  int v3; // eax@1
  int v4; // edx@2
  int v5; // eax@3
  char result; // al@6

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 424);
  v3 = *(_DWORD *)(a1 + 420);
  *(_DWORD *)(v3 + 20) += *(_DWORD *)(v2 + 12) / 8;
  *(_DWORD *)(v2 + 12) = 0;
  if ( (unsigned __int8)(*(int (__cdecl **)(int))(v3 + 8))(v1) )
  {
    v4 = *(_DWORD *)(v1 + 296);
    if ( v4 > 0 )
    {
      v5 = 0;
      do
        *(_DWORD *)(v2 + 4 * v5++ + 20) = 0;
      while ( v5 != v4 );
    }
    *(_DWORD *)(v2 + 16) = 0;
    *(_DWORD *)(v2 + 40) = *(_DWORD *)(v1 + 252);
    if ( *(_DWORD *)(v1 + 396) )
    {
      result = 1;
    }
    else
    {
      *(_BYTE *)(v2 + 36) = 0;
      result = 1;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
