signed int __thiscall sub_6F8C2B00(int this, int a2, int a3, int a4, int *a5, int a6, int a7, int *a8)
{
  unsigned int v8; // edi@1
  int v9; // ebp@1
  int v10; // eax@1
  int v11; // ebx@1
  unsigned int v12; // eax@5
  int v13; // edx@8
  signed int result; // eax@10
  int v15; // [sp+8h] [bp-18h]@1
  int v16; // [sp+Ch] [bp-14h]@1

  v8 = *(_DWORD *)(this + 8);
  v9 = a3;
  v10 = a4;
  v11 = a6;
  v15 = a3;
  v16 = a4;
  if ( *(_BYTE *)(this + 12) & 4 )
  {
    sub_6F90DF70((int)&v15);
    v9 = v15;
    v10 = v16;
  }
  if ( v10 != v9 )
  {
    while ( a7 != v11 )
    {
      v12 = sub_6F90DAC0((int)&v15, v8);
      if ( v12 == -2 )
      {
        v9 = v15;
        result = 1;
        goto LABEL_13;
      }
      if ( v8 < v12 )
      {
        v9 = v15;
        result = 2;
        goto LABEL_13;
      }
      if ( v12 > 0xFFFF )
      {
        if ( a7 - v11 == 4 )
        {
          result = 1;
          goto LABEL_13;
        }
        *(_DWORD *)(v11 + 4) = (unsigned __int16)((v12 & 0x3FF) - 9216);
        *(_DWORD *)v11 = (unsigned __int16)((v12 >> 10) - 10304);
        v13 = v11 + 8;
      }
      else
      {
        *(_DWORD *)v11 = v12;
        v13 = v11 + 4;
      }
      v9 = v15;
      v11 = v13;
      if ( v16 == v15 )
        break;
    }
  }
  result = 0;
LABEL_13:
  *a5 = v9;
  *a8 = v11;
  return result;
}
