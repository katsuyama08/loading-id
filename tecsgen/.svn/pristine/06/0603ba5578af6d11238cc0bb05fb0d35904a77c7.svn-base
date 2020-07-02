# coding: utf-8
#
#  TECS Generator
#      Generator for TOPPERS Embedded Component System
#  
#   Copyright (C) 2019-2020 by TOPPERS Project
#--
#   上記著作権者は，以下の(1)〜(4)の条件を満たす場合に限り，本ソフトウェ
#   ア（本ソフトウェアを改変したものを含む．以下同じ）を使用・複製・改
#   変・再配布（以下，利用と呼ぶ）することを無償で許諾する．
#   (1) 本ソフトウェアをソースコードの形で利用する場合には，上記の著作
#       権表示，この利用条件および下記の無保証規定が，そのままの形でソー
#       スコード中に含まれていること．
#   (2) 本ソフトウェアを，ライブラリ形式など，他のソフトウェア開発に使
#       用できる形で再配布する場合には，再配布に伴うドキュメント（利用
#       者マニュアルなど）に，上記の著作権表示，この利用条件および下記
#       の無保証規定を掲載すること．
#   (3) 本ソフトウェアを，機器に組み込むなど，他のソフトウェア開発に使
#       用できない形で再配布する場合には，次のいずれかの条件を満たすこ
#       と．
#     (a) 再配布に伴うドキュメント（利用者マニュアルなど）に，上記の著
#         作権表示，この利用条件および下記の無保証規定を掲載すること．
#     (b) 再配布の形態を，別に定める方法によって，TOPPERSプロジェクトに
#         報告すること．
#   (4) 本ソフトウェアの利用により直接的または間接的に生じるいかなる損
#       害からも，上記著作権者およびTOPPERSプロジェクトを免責すること．
#       また，本ソフトウェアのユーザまたはエンドユーザからのいかなる理
#       由に基づく請求からも，上記著作権者およびTOPPERSプロジェクトを
#       免責すること．
#  
#   本ソフトウェアは，無保証で提供されているものである．上記著作権者お
#   よびTOPPERSプロジェクトは，本ソフトウェアに関して，特定の使用目的
#   に対する適合性も含めて，いかなる保証も行わない．また，本ソフトウェ
#   アの利用により直接的または間接的に生じたいかなる損害に関しても，そ
#   の責任を負わない．
#  
#  $Id: FMPPlugin.rb 3140 2020-03-29 09:21:42Z okuma-top $
#++

# TECS でのクラス名を定義する。
# FMP3, HRMP3 等では、クラス名は実装依存となっている。
# 
# TECS では、カーネルオブジェクトのクラスと、非カーネルオブジェクトのクラスを区別する
# カーネルオブジェクトは、能動的か受動的かにより、クラス指定の意味合いが異なる。
# カーネルオブジェクトは、どのプロセッサからもアクセス可能であり、受け口関数を呼び出せる。
# 指定されたクラスに割り付けられたクラス
# 能動的なカーネルオブジェクト(タスクやハンドラ)は、割付可能なプロセッサ、初期プロセッサの指定となる．
# 非カーネルオブジェクトは、
# 
#      TECS Class         FMP3, HRMP3 Class
#  (1) CLS_P1_P1          CLS_PRC1
#  (2) CLS_P1_P1ALL       CLS_PRC1
#  (3) CLS_P1ALL_P1ALL    CLS_ALL_PRC1
#  (4) CLS_P1_FLAT        CLS_PRC1
#  (5) CLS_P1ALL_FLAT     CLS_ALL_PRC1


module FMPClassManager
    # return[0]:Bool:  b_analyze_ok: tecs_class_name is legal
    # return[1]:String: class_fmp3
    # return[2]:String: processor number for kernel object cell
    # return[3]:String: locality_kernel_obj "only"(specified processor only), "all"
    # return[4]:String: processor number for normal cell (prc_normal_cell)
    #                   locality_normal_cell が only または all の場合のみ有効
    # return[5]:String: locality_normal_cell "only"(specified processor only),
    #                                        "all"(accesible on all processors, but specified processor can access fast),
    #                                        "flat"(accesible on all processors with same speed) 

    def analyze_class_name tecs_class_name
      res = true
      class_fmp3 = "nil"
      prc_normal_cell = "nil"
      locality_normal_cell = "nil"
      if tecs_class_name =~ /\ACLS_P([0-9]+)_P([0-9]+)\Z/   # (1)
        class_fmp3 = "CLS_PRC#{$1}"
        prc_kernel_obj = $1
        locality_kernel_obj = "only"
        prc_normal_cell = $2
        locality_normal_cell = "only"
      elsif tecs_class_name =~ /\ACLS_P([0-9]+)_P([0-9]+)ALL\Z/ # (2)
        class_fmp3 = "CLS_PRC#{$1}"
        prc_kernel_obj = $1
        locality_kernel_obj = "only"
        prc_normal_cell = $2
        locality_normal_cell = "all"
      elsif tecs_class_name =~ /\ACLS_P([0-9]+)ALL_P([0-9]+)ALL\Z/ #(3)
        class_fmp3 = "CLS_ALL_PRC#{$1}"
        prc_kernel_obj = $1
        locality_kernel_obj = "all"
        prc_normal_cell = $2
        locality_normal_cell = "all"
      elsif tecs_class_name =~ /\ACLS_P([0-9]+)_FLAT\Z/ #(4)
        class_fmp3 = "CLS_PRC#{$1}"
        prc_kernel_obj = $1
        locality_kernel_obj = "only"
        locality_normal_cell = "flat"
      elsif tecs_class_name =~ /\ACLS_P([0-9]+)ALL_FLAT\Z/ #(5)
        class_fmp3 = "CLS_ALL_PRC#{$1}"
        prc_kernel_obj = $1
        locality_kernel_obj = "all"
        locality_normal_cell = "flat"
      elsif tecs_class_name =~ /\AOutOfClass\Z/
        class_fmp3 = "OutOfClass"
      else
        res = false
      end
      return res, class_fmp3, prc_kernel_obj, locality_kernel_obj, prc_normal_cell, locality_normal_cell
    end
    def convert_class_name tecs_class_name
      res = analyze_class_name tecs_class_name
      return res[1]
    end
  end
