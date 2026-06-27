int __usercall sub_6F72A0E0@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  int v2; // ebp@1
  unsigned int v3; // esi@1
  int v4; // ebx@1
  unsigned int v5; // edx@9
  int v6; // esi@9
  int v7; // edi@9
  int v8; // edi@10
  int v9; // eax@10
  unsigned int v10; // ecx@18
  unsigned int v11; // edx@19
  unsigned int v12; // eax@20
  unsigned int v13; // ecx@21
  unsigned int v14; // edx@22
  unsigned int v15; // eax@23
  unsigned int v16; // ecx@24
  int v18; // [sp+1Ch] [bp-20h]@10

  v2 = a1;
  v3 = a2;
  v4 = 0;
  byte_6FBB979F &= 0xEBu;
  dword_70041E9C = 0xFFFFFF;
  dword_70041E98 = 0xFFFFFF;
  dword_70041E94 = 0xFFFFFF;
  nullsub_10();
  while ( 1 )
  {
    if ( dword_6FBB51E0 == 512 )
      v3 &= 0x1FFFFCu;
    if ( ++v4 == 2000002 )
      break;
    if ( v3 != dword_70041E98 && v3 != dword_70041E9C )
    {
      if ( v3 >= dword_70041E94 )
        dword_70041E9C = v3;
      else
        dword_70041E98 = v3;
      dword_70041E94 = v3;
      v5 = v3 >> 2;
      v6 = v2 + 4 * (v3 >> 2);
      v7 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 >> 24 )
      {
        v8 = v2 + 4 * v5;
        v18 = v2 + 4 * ((*(_DWORD *)v6 >> 24) + v5);
        v9 = ((unsigned __int8)((unsigned int)(v18 - v6 - 4) >> 2) + 1) & 7;
        if ( !(((unsigned __int8)((unsigned int)(v18 - v6 - 4) >> 2) + 1) & 7) )
          goto LABEL_32;
        if ( v9 != 1 )
        {
          if ( v9 != 2 )
          {
            if ( v9 != 3 )
            {
              if ( v9 != 4 )
              {
                if ( v9 != 5 )
                {
                  if ( v9 != 6 )
                  {
                    v8 = v6 + 4;
                    sub_6F724020(*(_DWORD *)(v6 + 4));
                  }
                  v10 = *(_DWORD *)(v8 + 4);
                  v8 += 4;
                  sub_6F724020(v10);
                }
                v11 = *(_DWORD *)(v8 + 4);
                v8 += 4;
                sub_6F724020(v11);
              }
              v12 = *(_DWORD *)(v8 + 4);
              v8 += 4;
              sub_6F724020(v12);
            }
            v13 = *(_DWORD *)(v8 + 4);
            v8 += 4;
            sub_6F724020(v13);
          }
          v14 = *(_DWORD *)(v8 + 4);
          v8 += 4;
          sub_6F724020(v14);
        }
        v15 = *(_DWORD *)(v8 + 4);
        v8 += 4;
        sub_6F724020(v15);
        if ( v18 != v8 )
        {
LABEL_32:
          do
          {
            v16 = *(_DWORD *)(v8 + 4);
            v8 += 32;
            sub_6F724020(v16);
            sub_6F724020(*(_DWORD *)(v8 - 24));
            sub_6F724020(*(_DWORD *)(v8 - 20));
            sub_6F724020(*(_DWORD *)(v8 - 16));
            sub_6F724020(*(_DWORD *)(v8 - 12));
            sub_6F724020(*(_DWORD *)(v8 - 8));
            sub_6F724020(*(_DWORD *)(v8 - 4));
            sub_6F724020(*(_DWORD *)v8);
          }
          while ( v18 != v8 );
        }
        v7 = *(_DWORD *)v6;
      }
      v3 = v7 & 0xFFFFFF;
      if ( (v7 & 0xFFFFFF) != 0xFFFFFF )
        continue;
    }
    goto LABEL_27;
  }
  nullsub_10();
LABEL_27:
  nullsub_10();
  byte_6FBB979F |= 0x14u;
  return v4;
}
