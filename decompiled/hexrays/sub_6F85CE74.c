int __cdecl sub_6F85CE74(int a1, char a2)
{
  char v2; // dl@1
  int v3; // eax@1
  int v4; // ecx@2
  int result; // eax@5

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 20);
  if ( v3 != 100 )
  {
    v4 = *(_DWORD *)a1;
    *(_DWORD *)(v4 + 20) = 21;
    *(_DWORD *)(v4 + 24) = v3;
    (**(void (__cdecl ***)(_DWORD))a1)(a1);
    v2 = a2;
  }
  if ( v2 )
    sub_6F85CBD4(a1, 0);
  (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 16))(a1);
  (*(void (__cdecl **)(int))(*(_DWORD *)(a1 + 24) + 8))(a1);
  sub_6F85D094(a1);
  (**(void (__cdecl ***)(_DWORD))(a1 + 372))(a1);
  *(_DWORD *)(a1 + 244) = 0;
  result = 102 - (*(_BYTE *)(a1 + 208) < 1u);
  *(_DWORD *)(a1 + 20) = result;
  return result;
}
