int __cdecl sub_6F834C52(int a1, const void *a2)
{
  int result; // eax@4
  unsigned int v3; // [sp+18h] [bp-10h]@5
  unsigned int v4; // [sp+1Ch] [bp-Ch]@5

  if ( a1 && a2 && *(_DWORD *)(a1 + 600) )
  {
    v3 = *(_DWORD *)(a1 + 604);
    v4 = 5 * *(_DWORD *)(a1 + 600) + v3;
    do
    {
      v4 -= 5;
      if ( !memcmp(a2, (const void *)v4, 4u) )
        return *(_BYTE *)(v4 + 4);
    }
    while ( v4 > v3 );
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
