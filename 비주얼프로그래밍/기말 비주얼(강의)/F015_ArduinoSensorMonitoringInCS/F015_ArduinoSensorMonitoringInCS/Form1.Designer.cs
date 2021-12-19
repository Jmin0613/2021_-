
namespace F015_ArduinoSensorMonitoringInCS
{
    partial class Form1
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend1 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.파일ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.저장하기ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.가져오기ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.시뮬레이션ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.시작ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.끝ToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.lblConnectTime = new System.Windows.Forms.Label();
            this.txtCount = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btnValue = new System.Windows.Forms.Button();
            this.btnDisconnect = new System.Windows.Forms.Button();
            this.btnConnect = new System.Windows.Forms.Button();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.label3 = new System.Windows.Forms.Label();
            this.progressBar1 = new System.Windows.Forms.ProgressBar();
            this.label2 = new System.Windows.Forms.Label();
            this.listBox1 = new System.Windows.Forms.ListBox();
            this.chart1 = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.btnViewAll = new System.Windows.Forms.Button();
            this.btnZoom = new System.Windows.Forms.Button();
            this.menuStrip1.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).BeginInit();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(20, 20);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.파일ToolStripMenuItem,
            this.시뮬레이션ToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Padding = new System.Windows.Forms.Padding(9, 3, 0, 3);
            this.menuStrip1.Size = new System.Drawing.Size(739, 30);
            this.menuStrip1.TabIndex = 0;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // 파일ToolStripMenuItem
            // 
            this.파일ToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.저장하기ToolStripMenuItem,
            this.가져오기ToolStripMenuItem});
            this.파일ToolStripMenuItem.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.파일ToolStripMenuItem.Name = "파일ToolStripMenuItem";
            this.파일ToolStripMenuItem.Size = new System.Drawing.Size(53, 24);
            this.파일ToolStripMenuItem.Text = "파일";
            // 
            // 저장하기ToolStripMenuItem
            // 
            this.저장하기ToolStripMenuItem.Name = "저장하기ToolStripMenuItem";
            this.저장하기ToolStripMenuItem.Size = new System.Drawing.Size(152, 26);
            this.저장하기ToolStripMenuItem.Text = "저장하기";
            // 
            // 가져오기ToolStripMenuItem
            // 
            this.가져오기ToolStripMenuItem.Name = "가져오기ToolStripMenuItem";
            this.가져오기ToolStripMenuItem.Size = new System.Drawing.Size(152, 26);
            this.가져오기ToolStripMenuItem.Text = "가져오기";
            // 
            // 시뮬레이션ToolStripMenuItem
            // 
            this.시뮬레이션ToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.시작ToolStripMenuItem,
            this.끝ToolStripMenuItem});
            this.시뮬레이션ToolStripMenuItem.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.시뮬레이션ToolStripMenuItem.Name = "시뮬레이션ToolStripMenuItem";
            this.시뮬레이션ToolStripMenuItem.Size = new System.Drawing.Size(98, 24);
            this.시뮬레이션ToolStripMenuItem.Text = "시뮬레이션";
            // 
            // 시작ToolStripMenuItem
            // 
            this.시작ToolStripMenuItem.Name = "시작ToolStripMenuItem";
            this.시작ToolStripMenuItem.Size = new System.Drawing.Size(122, 26);
            this.시작ToolStripMenuItem.Text = "시작";
            // 
            // 끝ToolStripMenuItem
            // 
            this.끝ToolStripMenuItem.Name = "끝ToolStripMenuItem";
            this.끝ToolStripMenuItem.Size = new System.Drawing.Size(122, 26);
            this.끝ToolStripMenuItem.Text = "끝";
            // 
            // lblConnectTime
            // 
            this.lblConnectTime.AutoSize = true;
            this.lblConnectTime.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.lblConnectTime.Location = new System.Drawing.Point(34, 75);
            this.lblConnectTime.Name = "lblConnectTime";
            this.lblConnectTime.Size = new System.Drawing.Size(301, 20);
            this.lblConnectTime.TabIndex = 1;
            this.lblConnectTime.Text = "Connection Time : 2021-06-07 오전 3:33:33";
            // 
            // txtCount
            // 
            this.txtCount.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.txtCount.Location = new System.Drawing.Point(410, 75);
            this.txtCount.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.txtCount.Name = "txtCount";
            this.txtCount.Size = new System.Drawing.Size(102, 27);
            this.txtCount.TabIndex = 2;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.btnValue);
            this.groupBox1.Controls.Add(this.btnDisconnect);
            this.groupBox1.Controls.Add(this.btnConnect);
            this.groupBox1.Controls.Add(this.comboBox1);
            this.groupBox1.Location = new System.Drawing.Point(539, 41);
            this.groupBox1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Padding = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox1.Size = new System.Drawing.Size(177, 333);
            this.groupBox1.TabIndex = 3;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "port1";
            // 
            // btnValue
            // 
            this.btnValue.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnValue.Location = new System.Drawing.Point(14, 205);
            this.btnValue.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.btnValue.Name = "btnValue";
            this.btnValue.Size = new System.Drawing.Size(151, 120);
            this.btnValue.TabIndex = 3;
            this.btnValue.UseVisualStyleBackColor = true;
            // 
            // btnDisconnect
            // 
            this.btnDisconnect.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnDisconnect.Location = new System.Drawing.Point(14, 135);
            this.btnDisconnect.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.btnDisconnect.Name = "btnDisconnect";
            this.btnDisconnect.Size = new System.Drawing.Size(153, 63);
            this.btnDisconnect.TabIndex = 2;
            this.btnDisconnect.Text = "Disconnect";
            this.btnDisconnect.UseVisualStyleBackColor = true;
            this.btnDisconnect.Click += new System.EventHandler(this.btnDisconnect_Click);
            // 
            // btnConnect
            // 
            this.btnConnect.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.btnConnect.Location = new System.Drawing.Point(12, 68);
            this.btnConnect.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.btnConnect.Name = "btnConnect";
            this.btnConnect.Size = new System.Drawing.Size(153, 59);
            this.btnConnect.TabIndex = 1;
            this.btnConnect.Text = "Connect";
            this.btnConnect.UseVisualStyleBackColor = true;
            this.btnConnect.Click += new System.EventHandler(this.btnConnect_Click);
            // 
            // comboBox1
            // 
            this.comboBox1.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Location = new System.Drawing.Point(12, 29);
            this.comboBox1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(151, 28);
            this.comboBox1.TabIndex = 0;
            this.comboBox1.SelectedIndexChanged += new System.EventHandler(this.comboBox1_SelectedIndexChanged);
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Controls.Add(this.progressBar1);
            this.groupBox2.Location = new System.Drawing.Point(26, 132);
            this.groupBox2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Padding = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox2.Size = new System.Drawing.Size(493, 107);
            this.groupBox2.TabIndex = 4;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "portCell";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label3.Location = new System.Drawing.Point(442, 72);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(41, 20);
            this.label3.TabIndex = 6;
            this.label3.Text = "1023";
            // 
            // progressBar1
            // 
            this.progressBar1.Location = new System.Drawing.Point(11, 35);
            this.progressBar1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.progressBar1.Name = "progressBar1";
            this.progressBar1.Size = new System.Drawing.Size(475, 29);
            this.progressBar1.TabIndex = 0;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.label2.Location = new System.Drawing.Point(29, 204);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(17, 20);
            this.label2.TabIndex = 5;
            this.label2.Text = "0";
            // 
            // listBox1
            // 
            this.listBox1.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.listBox1.FormattingEnabled = true;
            this.listBox1.ItemHeight = 20;
            this.listBox1.Location = new System.Drawing.Point(26, 247);
            this.listBox1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.listBox1.Name = "listBox1";
            this.listBox1.Size = new System.Drawing.Size(492, 144);
            this.listBox1.TabIndex = 6;
            // 
            // chart1
            // 
            chartArea1.Name = "ChartArea1";
            this.chart1.ChartAreas.Add(chartArea1);
            legend1.Name = "Legend1";
            this.chart1.Legends.Add(legend1);
            this.chart1.Location = new System.Drawing.Point(25, 412);
            this.chart1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.chart1.Name = "chart1";
            series1.ChartArea = "ChartArea1";
            series1.Legend = "Legend1";
            series1.Name = "Series1";
            this.chart1.Series.Add(series1);
            this.chart1.Size = new System.Drawing.Size(677, 266);
            this.chart1.TabIndex = 7;
            this.chart1.Text = "chart1";
            // 
            // btnViewAll
            // 
            this.btnViewAll.Location = new System.Drawing.Point(180, 693);
            this.btnViewAll.Name = "btnViewAll";
            this.btnViewAll.Size = new System.Drawing.Size(128, 35);
            this.btnViewAll.TabIndex = 8;
            this.btnViewAll.Text = "View All";
            this.btnViewAll.UseVisualStyleBackColor = true;
            this.btnViewAll.Click += new System.EventHandler(this.btnViewAll_Click);
            // 
            // btnZoom
            // 
            this.btnZoom.Location = new System.Drawing.Point(381, 693);
            this.btnZoom.Name = "btnZoom";
            this.btnZoom.Size = new System.Drawing.Size(128, 35);
            this.btnZoom.TabIndex = 9;
            this.btnZoom.Text = "Zoom";
            this.btnZoom.UseVisualStyleBackColor = true;
            this.btnZoom.Click += new System.EventHandler(this.btnZoom_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 20F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(739, 740);
            this.Controls.Add(this.btnZoom);
            this.Controls.Add(this.btnViewAll);
            this.Controls.Add(this.chart1);
            this.Controls.Add(this.listBox1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.groupBox2);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.txtCount);
            this.Controls.Add(this.lblConnectTime);
            this.Controls.Add(this.menuStrip1);
            this.Font = new System.Drawing.Font("맑은 고딕", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(129)));
            this.MainMenuStrip = this.menuStrip1;
            this.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Name = "Form1";
            this.Text = "Aduino Sensor Monitoring";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem 파일ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 저장하기ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 가져오기ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 시뮬레이션ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 시작ToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem 끝ToolStripMenuItem;
        private System.Windows.Forms.Label lblConnectTime;
        private System.Windows.Forms.TextBox txtCount;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button btnValue;
        private System.Windows.Forms.Button btnDisconnect;
        private System.Windows.Forms.Button btnConnect;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.ProgressBar progressBar1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.ListBox listBox1;
        private System.Windows.Forms.DataVisualization.Charting.Chart chart1;
        private System.Windows.Forms.Button btnViewAll;
        private System.Windows.Forms.Button btnZoom;
    }
}

