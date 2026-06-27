int __cdecl sub_6F837911(int a1, unsigned int a2)
{
  int result; // eax@4
  int v3; // [sp+18h] [bp-8h]@1
  int v4; // [sp+1Ch] [bp-4h]@1

  v4 = 0;
  v3 = 0;
  if ( !sub_6F837771(a1, a2, &v4, &v3) || v3 != a2 && *(_BYTE *)(v3 + a1) )
    result = 0;
  else
    result = v4;
  return result;
}
