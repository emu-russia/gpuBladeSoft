unsigned int __cdecl sub_6F84F76C(int a1, _BYTE *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // eax@2
  unsigned __int8 *v4; // eax@5
  unsigned int result; // eax@6
  unsigned int v6; // [sp+Ch] [bp-18h]@1
  unsigned int v7; // [sp+10h] [bp-14h]@1
  unsigned __int8 *v8; // [sp+14h] [bp-10h]@1
  _BYTE *v9; // [sp+18h] [bp-Ch]@1
  unsigned int i; // [sp+1Ch] [bp-8h]@1
  unsigned int j; // [sp+1Ch] [bp-8h]@4

  v9 = a2;
  v8 = a3;
  v7 = (*(_BYTE *)(a1 + 11) + 7) >> 3;
  v6 = *(_DWORD *)(a1 + 4) - v7;
  for ( i = 0; i < v7; ++i )
  {
    v3 = v8++;
    *v9++ += *v3 >> 1;
  }
  for ( j = 0; ; ++j )
  {
    result = j;
    if ( j >= v6 )
      break;
    v4 = v8++;
    *v9 += (*v4 + v9[-v7]) / 2;
    ++v9;
  }
  return result;
}
