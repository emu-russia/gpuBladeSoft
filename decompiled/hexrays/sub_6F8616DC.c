char __usercall sub_6F8616DC@<al>(int a1@<eax>)
{
  int v1; // ebx@1
  unsigned int v2; // eax@4
  unsigned int v3; // edi@5
  unsigned int v4; // ecx@7
  int v5; // edx@8
  char result; // al@10

  v1 = a1;
  if ( *(_DWORD *)(a1 + 20) != 204 )
  {
    (**(void (__cdecl ***)(_DWORD))(a1 + 400))(a1);
    *(_DWORD *)(v1 + 120) = 0;
    *(_DWORD *)(v1 + 20) = 204;
  }
  if ( *(_BYTE *)(*(_DWORD *)(v1 + 400) + 8) )
  {
    v2 = *(_DWORD *)(v1 + 120);
    do
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(v1 + 96);
        if ( v4 > v2 )
          break;
        (*(void (__cdecl **)(int))(*(_DWORD *)(v1 + 400) + 4))(v1);
        (**(void (__cdecl ***)(_DWORD))(v1 + 400))(v1);
        *(_DWORD *)(v1 + 120) = 0;
        if ( !*(_BYTE *)(*(_DWORD *)(v1 + 400) + 8) )
          goto LABEL_14;
        v2 = 0;
      }
      v5 = *(_DWORD *)(v1 + 8);
      if ( v5 )
      {
        *(_DWORD *)(v5 + 4) = v2;
        *(_DWORD *)(v5 + 8) = v4;
        (*(void (__cdecl **)(int))v5)(v1);
        v3 = *(_DWORD *)(v1 + 120);
      }
      else
      {
        v3 = v2;
      }
      (*(void (__cdecl **)(int, _DWORD, int, _DWORD))(*(_DWORD *)(v1 + 404) + 4))(v1, 0, v1 + 120, 0);
      v2 = *(_DWORD *)(v1 + 120);
    }
    while ( v2 != v3 );
    result = 0;
  }
  else
  {
LABEL_14:
    *(_DWORD *)(v1 + 20) = 206 - (*(_BYTE *)(v1 + 65) < 1u);
    result = 1;
  }
  return result;
}
