int __cdecl sub_6F839262(int a1, _BYTE *a2)
{
  int result; // eax@9
  signed int i; // [sp+1Ch] [bp-Ch]@1

  i = 0;
  if ( a1 && *a2 == 35 )
  {
    for ( i = 1; i <= 14 && a2[i] != 32; ++i )
      ;
  }
  if ( a1 && *(_DWORD *)(a1 + 80) )
    result = (*(int (__cdecl **)(int, _BYTE *))(a1 + 80))(a1, &a2[i]);
  else
    result = sub_6F839BA4(a1, i + (_BYTE)a2);
  return result;
}
