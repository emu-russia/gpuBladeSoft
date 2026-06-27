int __usercall sub_6F8AB750@<eax>(int a1@<eax>, double a2, int a3, int a4, int a5, int a6, int *a7)
{
  int v7; // ebx@1
  char v10; // c2@1
  char v11; // c3@1
  char v12; // c0@1
  __int16 v13; // dx@3
  int v14; // ecx@3
  int v15; // eax@4
  _TBYTE v17; // [sp+20h] [bp-2Ch]@1
  int v18; // [sp+2Ch] [bp-20h]@1
  int v19; // [sp+38h] [bp-14h]@3
  char v20; // [sp+3Ch] [bp-10h]@6

  v7 = a1;
  *(double *)&v17 = a2;
  *((_DWORD *)&v17 + 2) = a3;
  _ST7 = a2;
  v18 = a4;
  __asm { fxam }
  if ( v12 )
  {
    if ( !v10 )
    {
      v19 = 4;
      v14 = 0;
      v15 = 0;
      goto LABEL_6;
    }
    v19 = 3;
    v13 = WORD4(v17);
    v14 = 0;
  }
  else
  {
    v13 = WORD4(v17);
    if ( v10 )
    {
      if ( v11 )
      {
        v19 = 2;
        v14 = -16445;
      }
      else
      {
        v19 = 1;
        v14 = (WORD4(v17) & 0x7FFF) - 16446;
      }
    }
    else
    {
      v19 = 0;
      v14 = 0;
    }
  }
  v15 = v13 & 0x8000;
LABEL_6:
  *a7 = v15;
  return sub_6F8ADF20((int)&unk_6FB48A94, v14, (int *)&v17, &v19, v7, a5, (int *)a6, (int *)&v20);
}
