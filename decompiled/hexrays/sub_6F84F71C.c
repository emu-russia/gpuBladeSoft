unsigned int __cdecl sub_6F84F71C(int a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // eax@2
  unsigned int result; // eax@3
  unsigned int v5; // [sp+0h] [bp-10h]@1
  _BYTE *v6; // [sp+4h] [bp-Ch]@1
  _BYTE *v7; // [sp+8h] [bp-8h]@1
  unsigned int i; // [sp+Ch] [bp-4h]@1

  v5 = *(_DWORD *)(a1 + 4);
  v7 = a2;
  v6 = a3;
  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= v5 )
      break;
    v3 = v6++;
    *v7++ += *v3;
  }
  return result;
}
