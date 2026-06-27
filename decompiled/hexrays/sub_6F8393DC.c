int __cdecl sub_6F8393DC(int a1, int a2, char *a3)
{
  int v3; // eax@11
  char *v4; // edx@11
  int v5; // eax@16
  char *v6; // edx@16
  char v8[192]; // [sp+1Ch] [bp-DCh]@11
  unsigned int v9; // [sp+DCh] [bp-1Ch]@10
  int v10; // [sp+E0h] [bp-18h]@5
  char *v11; // [sp+E4h] [bp-14h]@10
  int i; // [sp+E8h] [bp-10h]@5
  unsigned int v13; // [sp+ECh] [bp-Ch]@1

  v13 = 0;
  while ( v13 <= 0xBE && *a3 )
  {
    if ( !a2 || *a3 != 64 || !a3[1] )
      goto LABEL_22;
    v10 = *++a3;
    for ( i = 0; a123456789[i] != v10 && a123456789[i]; ++i )
      ;
    if ( i <= 7 )
    {
      v11 = (char *)(32 * i + a2);
      v9 = 32 * (i + 1) + a2;
      while ( v13 <= 0xBE && *v11 && (unsigned int)v11 < v9 )
      {
        v3 = v13++;
        v4 = v11++;
        v8[v3] = *v4;
      }
      ++a3;
    }
    else
    {
LABEL_22:
      v5 = v13++;
      v6 = a3++;
      v8[v5] = *v6;
    }
  }
  v8[v13] = 0;
  return sub_6F839262(a1, v8);
}
