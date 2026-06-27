int sub_6F731250()
{
  int *i; // ebx@1
  int v1; // ebx@3
  void *v2; // ST00_4@4
  int result; // eax@30

  for ( i = (int *)dword_6FBBFDD4; i != &dword_6FBBFDCC; i = (int *)sub_6F95AC00((int)i) )
    glDeleteTextures(1, (int)(i + 13));
  v1 = dword_6FBBFDD0;
  while ( v1 )
  {
    sub_6F684C40(*(_DWORD *)(v1 + 12));
    v2 = (void *)v1;
    v1 = *(_DWORD *)(v1 + 8);
    j_free_1(v2);
  }
  dword_6FBBFDD0 = 0;
  dword_6FBBFDD4 = (int)&dword_6FBBFDCC;
  dword_6FBBFDD8 = (int)&dword_6FBBFDCC;
  dword_6FBBFDDC = 0;
  sub_6F769910(dword_70055EF8);
  sub_6F7687D0((void **)dword_70055EF4);
  dword_70055EF0 = 0;
  if ( dword_6FBBFD9C )
  {
    glDeleteTextures(1, (int)&dword_6FBBFD98);
    dword_6FBBFD90 = 0;
    dword_6FBBFD94 = 0;
    dword_6FBBFD98 = 0;
    dword_6FBBFD9C = 0;
    if ( !dword_6FBBFD8C )
    {
LABEL_7:
      if ( !dword_6FBBFD7C )
        goto LABEL_8;
      goto LABEL_34;
    }
  }
  else if ( !dword_6FBBFD8C )
  {
    goto LABEL_7;
  }
  glDeleteTextures(1, (int)&dword_6FBBFD88);
  dword_6FBBFD80 = 0;
  dword_6FBBFD84 = 0;
  dword_6FBBFD88 = 0;
  dword_6FBBFD8C = 0;
  if ( !dword_6FBBFD7C )
  {
LABEL_8:
    if ( !dword_6FBBFCEC )
      goto LABEL_9;
    goto LABEL_35;
  }
LABEL_34:
  glDeleteTextures(1, (int)&dword_6FBBFD78);
  dword_6FBBFD70 = 0;
  dword_6FBBFD74 = 0;
  dword_6FBBFD78 = 0;
  dword_6FBBFD7C = 0;
  if ( !dword_6FBBFCEC )
  {
LABEL_9:
    if ( !dword_6FBBFCFC )
      goto LABEL_10;
    goto LABEL_36;
  }
LABEL_35:
  glDeleteTextures(1, (int)dword_6FBBFCE8);
  dword_6FBBFCE0[0] = 0;
  dword_6FBBFCE4 = 0;
  dword_6FBBFCE8[0] = 0;
  dword_6FBBFCEC = 0;
  if ( !dword_6FBBFCFC )
  {
LABEL_10:
    if ( !dword_6FBBFD0C )
      goto LABEL_11;
    goto LABEL_37;
  }
LABEL_36:
  glDeleteTextures(1, (int)&dword_6FBBFCF8);
  dword_6FBBFCF0 = 0;
  dword_6FBBFCF4 = 0;
  dword_6FBBFCF8 = 0;
  dword_6FBBFCFC = 0;
  if ( !dword_6FBBFD0C )
  {
LABEL_11:
    if ( !dword_6FBBFD1C )
      goto LABEL_12;
    goto LABEL_38;
  }
LABEL_37:
  glDeleteTextures(1, (int)&dword_6FBBFD08);
  dword_6FBBFD00 = 0;
  dword_6FBBFD04 = 0;
  dword_6FBBFD08 = 0;
  dword_6FBBFD0C = 0;
  if ( !dword_6FBBFD1C )
  {
LABEL_12:
    if ( !dword_6FBBFD2C )
      goto LABEL_13;
    goto LABEL_39;
  }
LABEL_38:
  glDeleteTextures(1, (int)&dword_6FBBFD18);
  dword_6FBBFD10 = 0;
  dword_6FBBFD14 = 0;
  dword_6FBBFD18 = 0;
  dword_6FBBFD1C = 0;
  if ( !dword_6FBBFD2C )
  {
LABEL_13:
    if ( !dword_6FBBFD3C )
      goto LABEL_14;
    goto LABEL_40;
  }
LABEL_39:
  glDeleteTextures(1, (int)&dword_6FBBFD28);
  dword_6FBBFD20 = 0;
  dword_6FBBFD24 = 0;
  dword_6FBBFD28 = 0;
  dword_6FBBFD2C = 0;
  if ( !dword_6FBBFD3C )
  {
LABEL_14:
    if ( !dword_6FBBFD4C )
      goto LABEL_15;
    goto LABEL_41;
  }
LABEL_40:
  glDeleteTextures(1, (int)&dword_6FBBFD38);
  dword_6FBBFD30 = 0;
  dword_6FBBFD34 = 0;
  dword_6FBBFD38 = 0;
  dword_6FBBFD3C = 0;
  if ( !dword_6FBBFD4C )
  {
LABEL_15:
    if ( !dword_6FBBFD5C )
      goto LABEL_16;
    goto LABEL_42;
  }
LABEL_41:
  glDeleteTextures(1, (int)&dword_6FBBFD48);
  dword_6FBBFD40 = 0;
  dword_6FBBFD44 = 0;
  dword_6FBBFD48 = 0;
  dword_6FBBFD4C = 0;
  if ( !dword_6FBBFD5C )
  {
LABEL_16:
    if ( !dword_6FBBFD6C )
      goto LABEL_17;
    goto LABEL_43;
  }
LABEL_42:
  glDeleteTextures(1, (int)&dword_6FBBFD58);
  dword_6FBBFD50 = 0;
  dword_6FBBFD54 = 0;
  dword_6FBBFD58 = 0;
  dword_6FBBFD5C = 0;
  if ( !dword_6FBBFD6C )
  {
LABEL_17:
    if ( !dword_6FBBFC0C )
      goto LABEL_18;
    goto LABEL_44;
  }
LABEL_43:
  glDeleteTextures(1, (int)&dword_6FBBFD68);
  dword_6FBBFD60 = 0;
  dword_6FBBFD64 = 0;
  dword_6FBBFD68 = 0;
  dword_6FBBFD6C = 0;
  if ( !dword_6FBBFC0C )
  {
LABEL_18:
    if ( !dword_6FBBFC1C )
      goto LABEL_19;
    goto LABEL_45;
  }
LABEL_44:
  glDeleteTextures(1, (int)dword_6FBBFC08);
  dword_6FBBFC00 = 0;
  dword_6FBBFC04 = 0;
  dword_6FBBFC08[0] = 0;
  dword_6FBBFC0C = 0;
  if ( !dword_6FBBFC1C )
  {
LABEL_19:
    if ( !dword_6FBBFC2C )
      goto LABEL_20;
    goto LABEL_46;
  }
LABEL_45:
  glDeleteTextures(1, (int)&dword_6FBBFC18);
  dword_6FBBFC10 = 0;
  dword_6FBBFC14 = 0;
  dword_6FBBFC18 = 0;
  dword_6FBBFC1C = 0;
  if ( !dword_6FBBFC2C )
  {
LABEL_20:
    if ( !dword_6FBBFC3C )
      goto LABEL_21;
    goto LABEL_47;
  }
LABEL_46:
  glDeleteTextures(1, (int)&dword_6FBBFC28);
  dword_6FBBFC20 = 0;
  dword_6FBBFC24 = 0;
  dword_6FBBFC28 = 0;
  dword_6FBBFC2C = 0;
  if ( !dword_6FBBFC3C )
  {
LABEL_21:
    if ( !dword_6FBBFC4C )
      goto LABEL_22;
    goto LABEL_48;
  }
LABEL_47:
  glDeleteTextures(1, (int)&dword_6FBBFC38);
  dword_6FBBFC30 = 0;
  dword_6FBBFC34 = 0;
  dword_6FBBFC38 = 0;
  dword_6FBBFC3C = 0;
  if ( !dword_6FBBFC4C )
  {
LABEL_22:
    if ( !dword_6FBBFC5C )
      goto LABEL_23;
    goto LABEL_49;
  }
LABEL_48:
  glDeleteTextures(1, (int)&dword_6FBBFC48);
  dword_6FBBFC40 = 0;
  dword_6FBBFC44 = 0;
  dword_6FBBFC48 = 0;
  dword_6FBBFC4C = 0;
  if ( !dword_6FBBFC5C )
  {
LABEL_23:
    if ( !dword_6FBBFC6C )
      goto LABEL_24;
    goto LABEL_50;
  }
LABEL_49:
  glDeleteTextures(1, (int)&dword_6FBBFC58);
  dword_6FBBFC50 = 0;
  dword_6FBBFC54 = 0;
  dword_6FBBFC58 = 0;
  dword_6FBBFC5C = 0;
  if ( !dword_6FBBFC6C )
  {
LABEL_24:
    if ( !dword_6FBBFC7C )
      goto LABEL_25;
    goto LABEL_51;
  }
LABEL_50:
  glDeleteTextures(1, (int)&dword_6FBBFC68);
  dword_6FBBFC60 = 0;
  dword_6FBBFC64 = 0;
  dword_6FBBFC68 = 0;
  dword_6FBBFC6C = 0;
  if ( !dword_6FBBFC7C )
  {
LABEL_25:
    if ( !dword_6FBBFC8C )
      goto LABEL_26;
    goto LABEL_52;
  }
LABEL_51:
  glDeleteTextures(1, (int)&dword_6FBBFC78);
  dword_6FBBFC70 = 0;
  dword_6FBBFC74 = 0;
  dword_6FBBFC78 = 0;
  dword_6FBBFC7C = 0;
  if ( !dword_6FBBFC8C )
  {
LABEL_26:
    if ( !dword_6FBBFC9C )
      goto LABEL_27;
    goto LABEL_53;
  }
LABEL_52:
  glDeleteTextures(1, (int)&dword_6FBBFC88);
  dword_6FBBFC80 = 0;
  dword_6FBBFC84 = 0;
  dword_6FBBFC88 = 0;
  dword_6FBBFC8C = 0;
  if ( !dword_6FBBFC9C )
  {
LABEL_27:
    if ( !dword_6FBBFCAC )
      goto LABEL_28;
    goto LABEL_54;
  }
LABEL_53:
  glDeleteTextures(1, (int)&dword_6FBBFC98);
  dword_6FBBFC90 = 0;
  dword_6FBBFC94 = 0;
  dword_6FBBFC98 = 0;
  dword_6FBBFC9C = 0;
  if ( !dword_6FBBFCAC )
  {
LABEL_28:
    if ( !dword_6FBBFCBC )
      goto LABEL_29;
    goto LABEL_55;
  }
LABEL_54:
  glDeleteTextures(1, (int)&dword_6FBBFCA8);
  dword_6FBBFCA0 = 0;
  dword_6FBBFCA4 = 0;
  dword_6FBBFCA8 = 0;
  dword_6FBBFCAC = 0;
  if ( !dword_6FBBFCBC )
  {
LABEL_29:
    if ( !dword_6FBBFCCC )
      goto LABEL_30;
    goto LABEL_56;
  }
LABEL_55:
  glDeleteTextures(1, (int)&dword_6FBBFCB8);
  dword_6FBBFCB0 = 0;
  dword_6FBBFCB4 = 0;
  dword_6FBBFCB8 = 0;
  dword_6FBBFCBC = 0;
  if ( !dword_6FBBFCCC )
  {
LABEL_30:
    result = dword_6FBBFCDC;
    if ( !dword_6FBBFCDC )
      return result;
LABEL_57:
    result = glDeleteTextures(1, (int)&dword_6FBBFCD8);
    dword_6FBBFCD0 = 0;
    dword_6FBBFCD4 = 0;
    dword_6FBBFCD8 = 0;
    dword_6FBBFCDC = 0;
    return result;
  }
LABEL_56:
  glDeleteTextures(1, (int)&dword_6FBBFCC8);
  result = dword_6FBBFCDC;
  dword_6FBBFCC0 = 0;
  dword_6FBBFCC4 = 0;
  dword_6FBBFCC8 = 0;
  dword_6FBBFCCC = 0;
  if ( dword_6FBBFCDC )
    goto LABEL_57;
  return result;
}
