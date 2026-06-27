int __cdecl sub_6F861D18(_DWORD *a1, int *a2, signed int *a3)
{
  _DWORD *v3; // edx@1
  int v4; // ebx@3
  int result; // eax@5
  signed int v6; // ecx@6
  void *v7; // eax@7
  int v8; // eax@11
  _DWORD *v9; // ST1C_4@4
  void (__cdecl **v10)(_DWORD); // eax@8
  _DWORD *v11; // [sp+1Ch] [bp-1Ch]@7

  v3 = a1;
  if ( !a2 || !a3 )
  {
    v8 = *a1;
    *(_DWORD *)(v8 + 20) = 24;
    (*(void (__cdecl **)(_DWORD *))v8)(a1);
    v3 = a1;
  }
  v4 = v3[6];
  if ( !v4 )
  {
    v9 = v3;
    v4 = (*(int (__cdecl **)(_DWORD *, _DWORD, signed int))v3[1])(v3, 0, 40);
    v3 = v9;
    v9[6] = v4;
  }
  *(_DWORD *)(v4 + 8) = sub_6F861B30;
  *(_DWORD *)(v4 + 12) = sub_6F861B58;
  *(_DWORD *)(v4 + 16) = sub_6F861B38;
  *(_DWORD *)(v4 + 20) = a2;
  *(_DWORD *)(v4 + 24) = a3;
  *(_DWORD *)(v4 + 28) = 0;
  result = *a2;
  if ( !*a2 || (v6 = *a3) == 0 )
  {
    v11 = v3;
    v7 = malloc(0x1000u);
    *a2 = (int)v7;
    *(_DWORD *)(v4 + 28) = v7;
    if ( !v7 )
    {
      v10 = (void (__cdecl **)(_DWORD))*v11;
      v10[5] = (void (__cdecl *)(_DWORD))56;
      v10[6] = (void (__cdecl *)(_DWORD))10;
      (*(void (__cdecl **)(_DWORD *))*v11)(v11);
    }
    *a3 = 4096;
    result = *a2;
    v6 = 4096;
  }
  *(_DWORD *)(v4 + 32) = result;
  *(_DWORD *)v4 = result;
  *(_DWORD *)(v4 + 36) = v6;
  *(_DWORD *)(v4 + 4) = v6;
  return result;
}
