int __cdecl sub_6F835D56(int a1, int a2)
{
  int result; // eax@2
  int v3; // [sp+18h] [bp-30h]@5
  int v4; // [sp+1Ch] [bp-2Ch]@5
  int v5; // [sp+20h] [bp-28h]@5
  int v6; // [sp+24h] [bp-24h]@5
  int v7; // [sp+28h] [bp-20h]@5
  int v8; // [sp+2Ch] [bp-1Ch]@5
  int v9; // [sp+30h] [bp-18h]@5
  int v10; // [sp+34h] [bp-14h]@5
  int v11; // [sp+38h] [bp-10h]@5
  int v12; // [sp+3Ch] [bp-Ch]@1

  v12 = sub_6F8358CF(a2);
  if ( v12 )
  {
    result = v12;
  }
  else
  {
    v12 = sub_6F8350DD(a1, a2);
    if ( v12 )
    {
      result = v12;
    }
    else
    {
      v3 = *(_DWORD *)a2;
      v4 = *(_DWORD *)(a2 + 4);
      v5 = *(_DWORD *)(a2 + 8);
      v6 = *(_DWORD *)(a2 + 12);
      v7 = *(_DWORD *)(a2 + 16);
      v8 = *(_DWORD *)(a2 + 20);
      v9 = *(_DWORD *)(a2 + 24);
      v10 = *(_DWORD *)(a2 + 28);
      v11 = *(_DWORD *)(a2 + 32);
      result = sub_6F835CE4((int)&v3, a1);
    }
  }
  return result;
}
