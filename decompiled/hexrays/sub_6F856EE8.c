int __cdecl sub_6F856EE8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax@5
  int v7; // [sp+1Ch] [bp-2Ch]@5
  int v8; // [sp+20h] [bp-28h]@5
  int v9; // [sp+24h] [bp-24h]@5
  int v10; // [sp+28h] [bp-20h]@5
  int v11; // [sp+2Ch] [bp-1Ch]@5
  int v12; // [sp+3Ch] [bp-Ch]@5

  if ( a1 && *(_DWORD *)(a1 + 4) == 1 )
  {
    if ( a2 )
    {
      if ( sub_6F855BF4((_DWORD *)a1) )
      {
        *(_DWORD *)(**(_DWORD **)a1 + 96) = a2;
        memset(&v7, 0, 0x20u);
        v7 = a1;
        v8 = a4;
        v9 = a5;
        v10 = a6;
        v11 = a3;
        v12 = sub_6F839D4E(a1, sub_6F856977, (int)&v7);
        sub_6F838F80(a1);
        result = v12;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      result = sub_6F838FC6(a1, (int)"png_image_write_to_stdio: invalid argument");
    }
  }
  else if ( a1 )
  {
    result = sub_6F838FC6(a1, (int)"png_image_write_to_stdio: incorrect PNG_IMAGE_VERSION");
  }
  else
  {
    result = 0;
  }
  return result;
}
