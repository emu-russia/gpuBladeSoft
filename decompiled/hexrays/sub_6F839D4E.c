int __cdecl sub_6F839D4E(int a1, int (__cdecl *a2)(int), int a3)
{
  int v3; // eax@1
  char v5; // [sp+14h] [bp-54h]@1
  int v6; // [sp+54h] [bp-14h]@1
  int v7; // [sp+58h] [bp-10h]@1
  int v8; // [sp+5Ch] [bp-Ch]@1

  v8 = a1;
  v6 = *(_DWORD *)(*(_DWORD *)a1 + 8);
  v3 = setjmp3((int)&v5, 0);
  v7 = v3 == 0;
  if ( v3 == 0 )
  {
    *(_DWORD *)(*(_DWORD *)v8 + 8) = &v5;
    v7 = a2(a3);
  }
  *(_DWORD *)(*(_DWORD *)v8 + 8) = v6;
  if ( !v7 )
    sub_6F838F80(v8);
  return v7;
}
